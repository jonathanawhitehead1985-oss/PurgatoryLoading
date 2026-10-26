// Purgatory loading screen: replaces the vanilla background art on the
// loading screen, the login countdown and the server queue.

const string PURGATORY_LOADING_IMAGE = "PurgatoryLoading/data/purgatory_loading_co.paa";

modded class LoadingScreen
{
	void LoadingScreen(DayZGame game)
	{
		PurgatoryApplyBackground();
	}

	override void Show()
	{
		super.Show();
		PurgatoryApplyBackground();
	}

	protected void PurgatoryApplyBackground()
	{
		if (m_ImageWidgetBackground)
			m_ImageWidgetBackground.LoadImageFile(0, PURGATORY_LOADING_IMAGE);

		// The art already carries the Purgatory logo, so keep the DayZ logo off it
		if (m_ImageLogoMid)
			m_ImageLogoMid.Show(false);
		if (m_ImageLogoCorner)
			m_ImageLogoCorner.Show(false);
	}
}

modded class LoginTimeBase
{
	override Widget Init()
	{
		Widget root = super.Init();

		ImageWidget background = ImageWidget.Cast(root.FindAnyWidget("Background"));
		if (background)
			background.LoadImageFile(0, PURGATORY_LOADING_IMAGE);

		return root;
	}
}

modded class LoginQueueBase
{
	override Widget Init()
	{
		Widget root = super.Init();

		ImageWidget background = ImageWidget.Cast(root.FindAnyWidget("Background"));
		if (background)
			background.LoadImageFile(0, PURGATORY_LOADING_IMAGE);

		return root;
	}
}
