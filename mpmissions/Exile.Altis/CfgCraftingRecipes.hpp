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
