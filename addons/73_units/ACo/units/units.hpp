class 73_ACoBase: 73_UnitBase
{
    faction = "73_ACo";
    editorCategory = "73_ACo";
    editorSubcategory = "73_ODST_EdSubCat";
};
class 73_ACo_ODST_Grenadier: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Grenadier";
    facewear = "";
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";
    weapons[] = {"OPTRE_MA37BGL","OPTRE_M6G","OPTRE_Smartfinder", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37BGL","OPTRE_M6G","OPTRE_Smartfinder", "Throw", "Put"};
    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Demo","73_CH252D_Helmet_Standard","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Demo","73_CH252D_Helmet_Standard","ItemMap","ItemAndroid","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    magazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","3Rnd_HE_Grenade_shell","MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag"};
    items[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
    respawnItems[] = {"ACE_bloodIV_250","ACE_bloodIV_250","ACE_bloodIV_500","ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","DMNS_Biofoam","DMNS_Biofoam"};
};

class 73_ACo_ODST_Rifleman: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Rifleman";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"MA_M8_Smoke_White","MA_M8_Smoke_White","MA_M9_Frag_Mag","MA_M9_Frag_Mag","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
    respawnItems[] = {"ACE_CableTie","ACE_CableTie","ACE_CableTie","ACE_DefusalKit","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam"};
};

class 73_ACo_ODST_AT: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST AT";

    facewear = "";
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_73_ODST_AT_backpack";

    weapons[] = {"OPTRE_MA37B","73_MPRL","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","73_MPRL","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_HEAT","73_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"73_HEAT","73_HEAT","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","DMNS_Biofoam","DMNS_Biofoam","DMNS_Biofoam"};
};

class 73_ACo_ODST_Autorifleman: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Autorifleman";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"OPTRE_M73","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_M73","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Autorifleman","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Autorifleman","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_ACo_ODST_Sniper: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Sniper";

    editorSubcategory = "73_ODST_EdSubCat";

    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"73_SRS99AM_Stealth_NSWep_SRS99AM_Suppressor_Cloth_NSWep_ORACLE_K_ARD_Optic_S","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"73_SRS99AM_Stealth_NSWep_SRS99AM_Suppressor_Cloth_NSWep_ORACLE_K_ARD_Optic_S","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Sniper","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Sniper","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};
    respawnMagazines[] = {"73_M233_145x114x8_APFSDS_TC","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_ACo_ODST_Marksman: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Marksman";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"73_MRS10_DMR_muzzle_snds_L_optic_AMS","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"73_MRS10_DMR_muzzle_snds_L_optic_AMS","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Marksman","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Marksman","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};
    respawnMagazines[] = {"OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green","OPTRE_M9_Frag","OPTRE_M9_Frag","TCF_20Rnd_86x70_Mag_APT"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_ACo_ODST_Officer: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Officer";
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_ODST_Dress_Uniform";
    backpack = "73_Rucksack";

    weapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};
    respawnWeapons[] = {"MA_MK50_Sidekick","OPTRE_Smartfinder", "Throw", "Put"};

    linkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};
    respawnLinkedItems[] = {"73_beret","ItemMap","ItemcTab","ItemRadio","ItemCompass","ItemWatch"};

    magazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};
    respawnMagazines[] = {"MA_12Rnd_10x31_SAP_Mag_Tracer"};

    items[] = {""};
    respawnItems[] = {""};
};

class 73_ACo_ODST_Demo: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Demo";
    facewear = "";
    
    attendant = 0;
    engineer = 0;
    canDeactivateMines = 1;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"MA_M7_SMG","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"MA_M7_SMG","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Demo","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Demo","73_CH252D_Helmet_Standard","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};
    respawnMagazines[] = {"MA_60Rnd_5x23Caseless_FMJ_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag_Tracer"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_ACo_ODST_Medic: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Medic";
    facewear = "G_Combat";

    attendant = 1;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_SORC_SORC","73_CH252D_Helmet_SORC","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_SORC_SORC","73_CH252D_Helmet_SORC","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_ACo_ODST_Team_Lead: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Team Lead";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_Rucksack";

    weapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};

class 73_ACo_ODST_Squad_Lead: 73_ACoBase
{
    scope = 2;
    scopeCurator = 2;
    displayName = "[73] ODST Squad Lead";
    facewear = "";

    attendant = 0;
    engineer = 0;
    canDeactivateMines = 0;

    uniformClass = "73_BDU_ODST_Urban_NC";
    backpack = "73_rucksack";

    weapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};
    respawnWeapons[] = {"OPTRE_MA37B","OPTRE_M6G", "Throw", "Put"};

    linkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};
    respawnLinkedItems[] = {"73_M52_ODST_Vest_ACo_Standard_Basic","73_CH252D_Helmet_Lead","ItemMap","ItemRadio","ItemCompass","ItemWatch","OPTRE_NVG"};

    magazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};
    respawnMagazines[] = {"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_32Rnd_762x51_Mag_Tracer_Yellow","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_8Rnd_127x40_AP_Mag"};

    items[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
    respawnItems[] = {"ACE_EarPlugs","OPTRE_Biofoam"};
};