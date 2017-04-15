class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Big Momma)";
	pictureItem = "Exile_Item_BreachingCharge_BigMomma";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_BigMomma"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{3, "Exile_Item_BreachingCharge_Metal"},
		{1, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"}
	};
	
	category = "Explosive";
	
};
class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "SatchelCharge_Remote_Mag"}
	};
	
	category = "Explosive";
	
};
class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{1, "DemoCharge_Remote_Mag"}
	};
	
	category = "Explosive";
	
};
class BreachingBigUSBV: Exile_AbstractCraftingRecipe
{
	name = "Big USBV (Digged in)";
	pictureItem = "IEDLandBig_Remote_Mag";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] =
	{
		{1, "IEDLandBig_Remote_Mag"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Knife",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[] = 
	{
		{10, "3Rnd_HE_Grenade_shell"},
		{10, "HandGrenade_Stone"},		
		{6, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},		
		{6, "Exile_Item_Can_Empty"},
		{1, "Exile_Item_ExtensionCord"},		
		{1, "Exile_Item_FuelCanisterFull"},		
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_MobilePhone"}		
	};
	
	category = "Explosive";
	
};
class BreachingSmallUSBV: Exile_AbstractCraftingRecipe
{
	name = "Small USBV (Digged in)";
	pictureItem = "IEDLandSmall_Remote_Mag";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] =
	{
		{1, "IEDLandSmall_Remote_Mag"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Knife",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[] = 
	{
		{5, "1Rnd_HE_Grenade_shell"},
		{5, "HandGrenade_Stone"},		
		{3, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},		
		{3, "Exile_Item_Can_Empty"},
		{1, "Exile_Item_ExtensionCord"},		
		{1, "Exile_Item_FuelCanisterFull"},		
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_MobilePhone"}		
	};
	
	category = "Explosive";
	
};
class BreachingBig_USBV: Exile_AbstractCraftingRecipe
{
	name = "Big USBV (Town)";
	pictureItem = "IEDUrbanBig_Remote_Mag";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] =
	{
		{1, "IEDUrbanBig_Remote_Mag"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Knife",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"		
	};
	components[] = 
	{
		{10, "HandGrenade"},
		{10, "HandGrenade_Stone"},		
		{6, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_Magazine02"},
		{4, "Exile_Item_PlasticBottleEmpty"},		
		{6, "Exile_Item_Can_Empty"},
		{1, "Exile_Item_ExtensionCord"},		
		{1, "Exile_Item_FuelCanisterFull"},		
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_MobilePhone"}
		
	};
	
	category = "Explosive";
	
};
class BreachingSmall_USBV: Exile_AbstractCraftingRecipe
{
	name = "Small USBV (Town)";
	pictureItem = "IEDUrbanSmall_Remote_Mag";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] =
	{
		{1, "IEDUrbanSmall_Remote_Mag"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Knife",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	components[] = 
	{
		{5, "MiniGrenade"},
		{5, "HandGrenade_Stone"},		
		{3, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_Magazine02"},
		{2, "Exile_Item_PlasticBottleEmpty"},		
		{3, "Exile_Item_Can_Empty"},
		{1, "Exile_Item_ExtensionCord"},		
		{1, "Exile_Item_FuelCanisterFull"},		
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_ZipTie"},
		{1, "Exile_Item_MobilePhone"}		
	};
	
	category = "Explosive";
	
};
class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
	
	category = "Food";
	
};
class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
	
	category = "Food";
	
};
class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
	
	category = "Food";
	
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
	
	category = "Food";
	
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
	
	category = "Drinks";
	
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
	
	category = "Food";
	
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
	
	category = "Food";
	
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	
	category = "Drinks";
	
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	
	category = "Drinks";
	
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
	
	category = "Food";
	
};
class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
	
	category = "Food";
	
};
class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiresConcreteMixer = true;	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiresConcreteMixer = true;	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiresConcreteMixer = true;
	returnedItems[] = 	
	{
		{1, "Exile_Item_ConcreteFloorPortKit"},
		{3, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};		
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiresConcreteMixer = true;	
	returnedItems[] = 	
	{
		{1, "Exile_Item_ConcreteGateKit"},
		{4, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiresConcreteMixer = true;	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteStairsKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiresConcreteMixer = true;	
	returnedItems[] =	
	{
		{1, "Exile_Item_ConcreteSupportKit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiresConcreteMixer = true;
	returnedItems[] = 	
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};		
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{6, "Exile_Item_WoodLog"},
		{1, "Exile_Item_Magazine02"}		
	};
	
	category = "Hardware";
	
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	tools[] = 
	{
		"Exile_Item_Screwdriver"
	};		
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_ExtensionCord"}
	};
	
	category = "Hardware";
	
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; 
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};		
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Hardware";
	
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	tools[] = 
	{
		"Exile_Item_Pliers"
	};	
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
	
	category = "Components";
	
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder"
	};	
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	
	category = "Hardware";
	
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder"
	};	
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	
	category = "Hardware";
	
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder"
	};	
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"}
	};
	
	category = "Hardware";
	
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	tools[] = 
	{
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_MetalScrews"}
	};
	
	category = "Hardware";
	
};
class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiresConcreteMixer = true;
	returnedItems[] = 	
	{
		{1, "Exile_Item_RepairKitConcrete"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};		
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Components";
	
};
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};	
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Components";
	
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_WoodPlank";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};	
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"}
	};
	
	category = "Components";
	
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
	
	category = "Components";
	
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	tools[] = 
	{
		"Exile_Item_Shovel"
	};	
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
	
	category = "Components Upgrade";
	
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	tools[] = 
	{
		"Exile_Item_Knife"
	};	
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}, 
		{2, "Exile_Item_FuelBarrelEmpty"}		
	};
	
	category = "Components";
	
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	
	category = "Components";
	
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};

	category = "Components";
	
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Handsaw"
	};	
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	
	category = "Hardware";
	
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components";
	
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};	
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
	
	category = "Hardware";
	
};
class EmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	
	category = "Equipment";	
	
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	
	category = "Equipment";
	
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	
	category = "Drinks";
	
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	
	category = "Drinks";
	
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	
	category = "Drinks";
	
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	
	category = "Drinks";
	
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	
	category = "Drinks";
	
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
	
	category = "Equipment";	
	
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	
	category = "Equipment";	
	
};
class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};		
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorwayKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};

	category = "Components Upgrade";
	
};
class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_ConcreteFloorKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Hammer",
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_ConcreteWallKit"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"}
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components Upgrade";	
	
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}		
	};
	
	category = "Components Upgrade";	
	
};
 class CraftBandage: Exile_AbstractCraftingRecipe
{
    name = "Craft Bandage";
    pictureItem = "Exile_Item_Bandage";		
    returnedItems[] =
    {		
        {1, "Exile_Item_Bandage"}		
    };
	tools[] = 
	{
		"Exile_Item_Knife"
	};	
    components[] =
    {		
        {6, "Exile_Item_ToiletPaper"}
    };
	
	category = "FirstAid";	
	
};
class crafted_Vishpirin: Exile_AbstractCraftingRecipe
{
	name = "Craft Vishpirin";
	pictureItem = "Exile_Item_Vishpirin";
	returnedItems[] =
	{
		{1, "Exile_Item_Vishpirin"}
	};
	tools[] =
	{
		"Exile_Item_Can_Empty"
	};
	components[] = 
	{
		{2, "Exile_Item_SeedAstics"},
        {2, "Exile_Item_Heatpack"},		
		{2, "Exile_Item_PlasticBottleFreshWater"},
		{2, "Exile_Item_PowerDrink"}
	};
	
	category = "FirstAid";	
};
class CraftInstaDoc: Exile_AbstractCraftingRecipe
{
    name = "Craft Insta Doc";
    pictureItem = "Exile_Item_InstaDoc";
	requiresFire = 1;		
    returnedItems[] =
    {
        {1, "Exile_Item_InstaDoc"}
    };
	tools[] = 
	{
		"Exile_Item_CookingPot"
	};	
    components[] =
    {
        {4, "Exile_Item_Vishpirin"},
        {2, "Exile_Item_Beer"},
        {1, "Exile_Item_PlasticBottleFreshWater"}
    };

	category = "FirstAid";
	
};
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
class CraftKnifeCanOpener: Exile_AbstractCraftingRecipe
{
	name = "Craft Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};
	components[] = 
	{
		{1, "Exile_Item_Knife"},
		{1, "Exile_Item_ZipTie"}
	};
	
	category = "Equipment";
	
};
class CraftPlierCanOpener: Exile_AbstractCraftingRecipe
{
	name = "Craft Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};	
	components[] = 
	{
		{1, "Exile_Item_Pliers"},
		{1, "Exile_Item_ZipTie"}
	};
	
	category = "Equipment";	
	
};
class CraftTent: Exile_AbstractCraftingRecipe
{
	name = "Craft Tent";
	pictureItem = "Exile_Item_CamoTentKit";
    requiresFire = 1;	
	returnedItems[] =
	{
		{1, "Exile_Item_CamoTentKit"}
	};
	tools[] =
	{
		"Exile_Item_Knife",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"},		
        {2, "Exile_Item_DuctTape"},
        {4, "Exile_Item_WoodPlank"},
        {2, "Exile_Item_Rope"},
    	{2, "Exile_Item_ZipTie"}		
	};
	
	category = "Components";	
	
};
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
 class CraftMetalScrews: Exile_AbstractCraftingRecipe
{
    name = "Craft Metal Screws";
    pictureItem = "Exile_Item_MetalScrews";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {2, "Exile_Item_MetalScrews"}
    };
	tools[] = 
	{
		"Exile_Item_Pliers"
	};	
    components[] =
    {		
        {8, "Exile_Item_Can_Empty"}		
    };

	category = "Hardware";
	
};
 class CraftMetalWire: Exile_AbstractCraftingRecipe
{
    name = "Metal Wire";
    pictureItem = "Exile_Item_MetalWire";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_MetalWire"}
    };
	tools[] = 
	{
		"Exile_Item_Pliers"
	};	
    components[] =
    {		
        {4, "Exile_Item_Can_Empty"},
        {1, "Exile_Item_Rope"}			
    };	

	category = "Hardware";
	
};
class SmeltCans: Exile_AbstractCraftingRecipe
{
	name = "Smelt Empty Cans";
	pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Hammer"
	};
	components[] = 
	{
		{12, "Exile_Item_Can_Empty"}
	};
	
	category = "Hardware";	
	
};
 class CraftJunkMetal: Exile_AbstractCraftingRecipe
{
    name = "Craft Junk Metal";
    pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_JunkMetal"}
    };
	tools[] = 
	{
		"Exile_Item_Hammer"
	};	
    components[] =
    {		
        {2, "Exile_Item_CookingPot"}		
    };

	category = "Hardware";
	
};
 class CraftDuctTape: Exile_AbstractCraftingRecipe
{
    name = "Craft Duct Tape";
    pictureItem = "Exile_Item_DuctTape";
	requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {		
        {1, "Exile_Item_DuctTape"}
    };
	tools[] = 
	{
		"Exile_Item_Knife"
	};	
    components[] =
    {		
        {6, "Exile_Item_ZipTie"}	
    };	
	
	category = "Hardware";	
	
};
 class Foolbox: Exile_AbstractCraftingRecipe
{
    name = "Craft Foolbox";
    pictureItem = "Exile_Item_Foolbox";
	requiredInteractionModelGroup = "WorkBench";
    returnedItems[] = 
    {
        {1, "Exile_Item_Foolbox"}
    };
        components[] =
    {
        {1, "Exile_Item_Pliers"},
        {1, "Exile_Item_Grinder"},
        {1, "Exile_Item_CordlessScrewdriver"},
        {1, "Exile_Item_Handsaw"},
        {1, "Exile_Item_Hammer"},
        {1, "Exile_Item_Screwdriver"},
        {1, "Exile_Item_Knife"},		
        {1, "Exile_Item_Wrench"}
    };
	
	category = "Hardware";		
	
};	
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
class CraftCarWheel: Exile_AbstractCraftingRecipe
{
	name = "Craft Car Wheel";
	pictureItem = "Exile_Item_CarWheel";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_CarWheel"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_CookingPot"		
	};	
	components[] = 
	{
		{6, "Exile_Item_RubberDuck"}
	};
	
	category = "Hardware";
	
};
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
class CookPlasticBottleDirtyWater_can: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water (Can)";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_Can_Empty"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	
	category = "Drinks";
	
};
class CookPlasticBottleSaltWater_can: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water (Can)";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_Can_Empty"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	
	category = "Drinks";	
	
};
class CookCoffee_can: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee (Can)";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_Can_Empty"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
	
	category = "Drinks";
	
};
class deCraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{3, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};

	category = "Components Recycle";
	
};
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
class deUpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{4, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};	
	
	category = "Components Recycle";	
	
};
class deCraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{2, "Exile_Item_WoodPlank"}	
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	
	category = "Components Recycle";
	
};
class deUpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{3, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	
	category = "Components Recycle";	
	
};
class deUpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{3, "Exile_Item_WoodPlank"}	
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	
	category = "Components Recycle";	
	
};
class deCraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{3, "Exile_Item_WoodPlank"}	
	};	
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{3, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Recycle 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{2, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{5, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Recycle Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] = 
	{
		{2, "Exile_Item_WoodPlank"}		
	};
	tools[] = 
	{
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"		
	};	
	components[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Recycle Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Sand"}
	};
	tools[] = 
	{
		"Exile_Item_Knife",
		"Exile_Item_Shovel"		
	};	
	components[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	
	category = "Components Recycle";
	
};
class deCraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Recycle Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{3, "Exile_Item_Sand"}
	};
	tools[] = 
	{
		"Exile_Item_Knife",
		"Exile_Item_Shovel"		
	};	
	components[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	
	category = "Components Recycle";
	
};
class deCraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Recycle H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"},
		{1, "Exile_Item_MetalWire"}
	};
	tools[] = 
	{
		"Exile_Item_Knife",
		"Exile_Item_Pliers",
		"Exile_Item_Shovel"		
	};	
	components[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Recycle Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{10, "Exile_Item_PlasticBottleEmpty"}, 
		{1, "Exile_Item_FuelBarrelEmpty"}		
	};
	tools[] = 
	{
		"Exile_Item_Knife"	
	};	
	components[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};	
	components[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	
	category = "Components Recycle";
	
};
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
class deCraftConcreteDoorway: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Doorway";
	pictureItem = "Exile_Item_ConcreteDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"	
	};	
	components[] =	
	{
		{1, "Exile_Item_ConcreteDoorwayKit"}
	};
	
	category = "Components Recycle";
	
};
class deUpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Door";
	pictureItem = "Exile_Item_ConcreteDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] = 
	{
		{1, "Exile_Item_ConcreteDoorKit"}
	};

	category = "Components Recycle";
	
};
class deCraftConcreteFloor: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Floor";
	pictureItem = "Exile_Item_ConcreteFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] =	
	{
		{1, "Exile_Item_ConcreteFloorKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftConcreteFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Floor Port";
	pictureItem = "Exile_Item_ConcreteFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";

	returnedItems[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] = 	
	{
		{1, "Exile_Item_ConcreteFloorPortKit"}
	};
	
	category = "Components Recycle";
	
};
class deUpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Window";
	pictureItem = "Exile_Item_ConcreteWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"}		
	};	
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] = 
	{
		{1, "Exile_Item_ConcreteWindowKit"}
	};
	
	category = "Components Recycle";	
	
};
class deCraftConcreteWall: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Wall";
	pictureItem = "Exile_Item_ConcreteWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] = 	
	{
		{1, "Exile_Item_ConcreteWallKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftConcreteGate: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Gate";
	pictureItem = "Exile_Item_ConcreteGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] = 	
	{
		{1, "Exile_Item_ConcreteGateKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftConcretStairs: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Stairs";
	pictureItem = "Exile_Item_ConcreteStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] =	
	{
		{1, "Exile_Item_ConcreteStairsKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftConcretSupport: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Support";
	pictureItem = "Exile_Item_ConcreteSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_MetalPole"}
	};
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_CordlessScrewdriver",
		"Exile_Item_Hammer"
	};	
	components[] =	
	{
		{1, "Exile_Item_ConcreteSupportKit"}
	};
	
	category = "Components Recycle";
	
};
class deCraftRepairKitConcrete: Exile_AbstractCraftingRecipe
{
	name = "Recycle Concrete Repair Kit";
	pictureItem = "Exile_Item_Cement";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
	components[] = 	
	{
		{1, "Exile_Item_RepairKitConcrete"}
	};	
	
	category = "Components Recycle";
	
};
class deCraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Recycle Metal Repair Kit";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{2, "Exile_Item_MetalBoard"}
	};	
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};	
	components[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	
	category = "Components Recycle";
	
};
class deCraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Recycle Wood Repair Kit";
	pictureItem = "Exile_Item_WoodPlank";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{2, "Exile_Item_WoodPlank"}
	};	
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};	
	components[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	
	category = "Components Recycle";
	
};
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
class CraftLaptop: Exile_AbstractCraftingRecipe
{
	name = "Craft Laptop";
	pictureItem = "Exile_Item_Laptop";
    requiredInteractionModelGroup = "WorkBench";	
	returnedItems[] =
	{
		{1, "Exile_Item_Laptop"}

	};
	tools[] =
	{
		"Exile_Item_Foolbox",
        "Exile_Item_Screwdriver"		
	};	
	components[] =
	{
		{2, "Exile_Item_MobilePhone"},
		{6, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_DuctTape"},		
		{1, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalScrews"},		
		{4, "Exile_Item_LightBulb"}
	};
	
	category = "Hacking Tools";
};
class Exile_Item_BaseCameraKit: Exile_AbstractCraftingRecipe
{
    name = "Craft Security Camera";
    pictureItem = "Exile_Item_BaseCameraKit";
    requiredInteractionModelGroup = "WorkBench";	
    returnedItems[] =
    {
        {1, "Exile_Item_BaseCameraKit"}
    };
	tools[] =
	{
		"Exile_Item_Foolbox",
        "Exile_Item_Screwdriver"		
	};	
    components[] =
    {
        {1, "Exile_Item_ExtensionCord"},
        {1, "Exile_Item_MetalPole"},
        {6, "Exile_Item_MetalScrews"},
        {2, "Exile_Item_JunkMetal"},
        {2, "Exile_Item_ZipTie"}	
	};
	
	category = "Security";
};