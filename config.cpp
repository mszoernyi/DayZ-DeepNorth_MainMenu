class CfgPatches
{
	class DeepNorth_MainMenu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};
class CfgMods
{
	class DeepNorth_MainMenu
	{
		dir="DeepNorth_MainMenu";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="DeepNorth MainMenu";
		logoSmall="";
		logo="DeepNorth_MainMenu/gui/MainMenu/logo.edds";
		logoOver="DeepNorth_MainMenu/gui/MainMenu/logo.edds";
		tooltip="DeepNorth MainMenu";
		overview="DeepNorth MainMenu Overview";
		credits="tecow";
		author="tecow";
		authorID="";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Mission",
			"Game",
			"World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"DeepNorth_MainMenu/scripts/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"DeepNorth_MainMenu/scripts/5_Mission"
				};
			};
			class worldScriptModule
			{
				value="";
				files[] = 
				{

					"DeepNorth_MainMenu/scripts/4_World"
				};
			};
		};
	};
};
class CfgSoundSets
{
	class FMusic_Menu_SoundSet
	{
		soundShaders[]=
		{
			"FMusic_Menu_SoundShader"
		};
		volumeFactor=1;
		frequencyFactor=1;
		spatial=0;
	};
};
class CfgSoundShaders
{
	class FMusic_Menu_SoundShader
	{
		samples[]=
		{
		    {"DeepNorth_MainMenu\data\mainmenu1",0.250}
		};
		volume=0.37;
	};
};
