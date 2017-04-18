/**************************************************************************************************************************************************************
***************************************************************************************************************************************************************
**************************************************************		DIES IS EIN PLATZHALTER		***************************************************************
*******************************************************      F�R DIE CRAFTINGKATEGORIE EQUIPMENT        *******************************************************
***************************************************************************************************************************************************************
**************************************************************************************************************************************************************/

/**********************************    AXT    **********************************/
class Exile_Melee_Axe: Exile_AbstractCraftingRecipe
{
	name = "Craft Axe";
	pictureItem = "Exile_Melee_Axe";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Melee_Axe"}
	};
     components[] =
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_WoodLog"}
	};
		category = "Equipment";
};

/**********************************    CAN OPENER    **********************************/
class crafted_canOpener: Exile_AbstractCraftingRecipe
{
	name = "Craft Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	category = "Equipment";	
};

/**********************************    KOCHTOPF    **********************************/
class CraftCookingPot: Exile_AbstractCraftingRecipe
{
    name = "Craft Cooking Pot";
    pictureItem = "Exile_Item_CookingPot";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_CookingPot"}
    };
	tools[] = 
	{
		"Exile_Item_Hammer"
	};	
    components[] =
    {		
        {2, "Exile_Item_MetalWire"},
        {6, "Exile_Item_Can_Empty"}		
    };
	category = "Equipment";	
};

/**********************************    MESSER    **********************************/
class CraftKnifer: Exile_AbstractCraftingRecipe
{
    name = "Craft a Knife";
    pictureItem = "Exile_Item_Knife";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
    returnedItems[] =
    {		
        {1, "Exile_Item_Knife"}
    };
	tools[] = 
	{
		"Exile_Item_Hammer"
	};	
    components[] =
    {		
        {1, "Exile_Item_MetalBoard"},	
        {1, "Exile_Item_WoodLog"},
        {1, "Exile_Item_Rope"}		
    };
	category = "Equipment";	
};

/**********************************    TOILETTENPAPIER    **********************************/
class CraftToiletpaper: Exile_AbstractCraftingRecipe
{
    name = "Craft ToiletPaper";
    pictureItem = "Exile_Item_ToiletPaper";
    returnedItems[] =
    {
        {2, "Exile_Item_ToiletPaper"}
    };
    components[] =
    {
        {1, "Exile_Item_Magazine01"},
        {1, "Exile_Item_Magazine02"},
        {1, "Exile_Item_Magazine03"},
        {1, "Exile_Item_Magazine04"}
    };	
	category = "Equipment";		
};