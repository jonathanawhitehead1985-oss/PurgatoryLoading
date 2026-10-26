modded class LoadingMenu
{
	override Widget Init()
	{
		Widget root = super.Init();

		if (m_image)
			m_image.LoadImageFile(0, PURGATORY_LOADING_IMAGE);

		return root;
	}
}
