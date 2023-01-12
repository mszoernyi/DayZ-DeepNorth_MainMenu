// Base class for maanging JSON config files
// Usage:
//
//	class MyConfig extends ConfigManager
//  {
//		protected static string configFileName = "my_filename.json";
//		
//		string my_config_value_1 = "my_default_value";
//		string my_config_value_2 = "my_default_value";
//  }
class ConfigManager
{
	protected static string ConfigPATH = "$profile:\\DeepNorth_MainMenu\\settings.json";
	protected static string configRoot = "$profile:\\DeepNorth_MainMenu\\";	
	
    // Variables to save go here
	string version = "1.2"; // change version everytime the list of variables or types change!
	string serverIp;
	int serverPort;
	
	string newsDate;
	string newsText;
		
    // NonSerialed Variables that should not be saved go here
	//[NonSerialized()]
	//int ConfigInt = 1;
	
	void ConfigManager()
	{
		// insert default settings here
	}
	
	// Setters are required to ensure SHumanCommandMoveSettings
	void SetServerIp(string value)
	{
		serverIp = value;
		Save();
	}
	string GetServerIp()
	{
		return serverIp;
	}

	void SetServerPort(int value)
	{
		serverPort = value;
		Save();
	}
	int GetServerPort()
	{
		return serverPort;
	}

	void SetNewsDate(string value)
	{
		newsDate = value;
		Save();
	}
	void SetNewsText(string value)
	{
		newsText = value;
		Save();
	}
	string GetNewsDate()
	{
		return newsDate;
	}
	string GetNewsText()
	{
		return newsText;
	}
	
	void Load() {
		Print("[DeepNorth_MainMenu] Loading config");
		if (GetGame().IsServer()) {
			if (FileExist(configRoot) == 0) // Save Directory Does not Exist
	        {
	            Print("[DeepNorth_MainMenu] '" + configRoot + "' does not exist, creating directory");
	            MakeDirectory(configRoot);
	        }
			
			if (FileExist(ConfigPATH)) { //If Config File exist load File
			    JsonFileLoader<ConfigManager>.JsonLoadFile(ConfigPATH, this);
				if (version != "1.1") {
					Print("Config version is different: "+version);
					// TODO: add merge logic to load older config and apply newer version
					Save();
				} else {
					Print("Config version is same. Skipping");
				}
			} else { //File does not exist create file
				Save();
			}
		}
	}
	
	void Save() {
		if (GetGame().IsServer()) {
			JsonFileLoader<ConfigManager>.JsonSaveFile(ConfigPATH, this);
		}
	}
}

ref ConfigManager m_ConfigManager;

//Helper function to return Config
static ref ConfigManager DN_LoadConfig()
{
	if (!m_ConfigManager)
	{
		m_ConfigManager = new ConfigManager;
			
		if (GetGame().IsServer()) {
			m_ConfigManager.Load();
		}
	}

	return m_ConfigManager;
};
