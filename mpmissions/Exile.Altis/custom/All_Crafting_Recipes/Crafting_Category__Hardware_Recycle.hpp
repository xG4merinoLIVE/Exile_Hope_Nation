/**************************************************************************************************************************************************************
***************************************************************************************************************************************************************
**************************************************************		DIES IS EIN PLATZHALTER		***************************************************************
*******************************************************   F�R DIE CRAFTINGKATEGORIE HARDWARE RECYCLE	*******************************************************
***************************************************************************************************************************************************************
**************************************************************************************************************************************************************/

/**********************************    FLOODLICHT RECYCLE    **********************************/
class deCraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Recycle Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
	tools[] = 
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    TRAGBARER GENERATOR RECYCLE    **********************************/
class deCraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Recycle Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    FEUERSTELLE RECYCLE    **********************************/
class deCraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Recycle Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{3, "Exile_Item_WoodLog"}		
	};	
	components[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    BEFESTIGUNG RECYCLE    **********************************/
class deCraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Recycle Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"}
	};	
	tools[] = 
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};		
	components[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    METAL ROHRE RECYCLE    **********************************/
class deCraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Recycle Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{2, "Exile_Item_JunkMetal"}		
	};
	tools[] = 
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};	
	components[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    METAL BRETT RECYCLE    **********************************/
class deCraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Recycle Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_JunkMetal"}
	};	
	tools[] = 
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};	
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    METAL RECYCLE    **********************************/
class deCraftJunkMetal: Exile_AbstractCraftingRecipe
{
	name = "Recycle Junk Metal";
	pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	returnedItems[] = 
	{
		{12, "Exile_Item_Can_Empty"}
	};	
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    METALZAUN RECYCLE    **********************************/
class deCraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Recycle Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{2, "Exile_Item_MetalPole"}
	};	
	tools[] = 
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};	
	components[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};	
	category = "Hardware Recycle";	
};

/**********************************    WERKBANK RECYCLE    **********************************/
class deCraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Recycle Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";	
	returnedItems[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};	
	category = "Hardware Recycle";	
};