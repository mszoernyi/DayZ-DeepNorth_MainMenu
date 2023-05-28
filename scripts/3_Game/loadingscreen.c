modded class LoadingScreen
{
	ref TStringArray myLoadingScreens = {
		"DeepNorth_Loading\\data\\Loading1.edds"};

	override void Show()
	{		
		string preel = myLoadingScreens.GetRandomElement();
		m_ImageWidgetBackground.LoadMaskTexture("DeepNorth_Loading/data/ls_mask.paa");
		m_ImageWidgetBackground.LoadImageFile(0, preel);   
        m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);	    	
		m_ModdedWarning.Show(false);
		super.Show();
	}
}


modded class LoginTimeBase extends UIScriptedMenu
{
	ref TStringArray myLoadingScreens = {
		"DeepNorth_Loading\\data\\Loading1.edds"};

    override void Show()
    {
        super.Show();
        if (layoutRoot)
        {
            string preel = myLoadingScreens.GetRandomElement();
            ImageWidget background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
            background.LoadImageFile(0, preel);  
        }
    }
}


modded class LoginQueueBase extends UIScriptedMenu
{
	ref TStringArray myLoadingScreens = {
		"DeepNorth_Loading\\data\\Loading1.edds"};

    override void Show()
    {
        super.Show();
        if (layoutRoot)
        {
            string preel = myLoadingScreens.GetRandomElement();
            ImageWidget background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
            background.LoadImageFile(0, preel);  
        }
    }
}