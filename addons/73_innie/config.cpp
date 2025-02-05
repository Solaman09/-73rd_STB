class CfgPatches
{
    class 73_innie
    {
        author = "73rd S-4 Team";
		name = "73rd STB Aux"
		units[] = 
        {
            "73_URF_Soldier_Rifleman",
            "73_URF_Soldier_Medic"
        }; 
        weapons[] = 
        {
        }; 
		vehicles[] =
		{
		};
		ammo[] = 
		{
			""
		};
        requiredVersion = 0.1; 
        requiredAddons[] = 
        {
			"73_Units"
        };
    };
};
class cfgFactionClasses
{
    class 73_URF
    {
        displayName = "[73] United Rebel Front";
        priority = 0; // Position in list.
        side = 0; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
};

class CfgEditorCategories
{
	class 73_URF // Category class, you point to it in editorCategory property
	{
		displayName = "[73] United Rebel Front"; // Name visible in the list
		scopeCurator=2;
		scopeeditor=2;
	};
};
class CfgEditorSubcategories
{
    class 73_Men_EdSubCat
    {
        displayName = "Men";
    };
};
class UniformItem;
class HitPoints;
class HitFace;
class HitNeck;
class HitHead;
class HitPelvis;
class HitAbdomen;
class HitDiaphragm;
class HitChest;
class HitBody;
class HitArms;
class HitHands;
class HitLegs;
class HeadgearItem;
class CfgWeapons
{
//marine

    #include "\73_innie\URF\URFVest.hpp"
    #include "\73_innie\URF\URFHelmet.hpp"
    #include "\73_innie\URF\URFUniform.hpp"
};

class CfgVehicles
{
    #include "\73_innie\URF\URFUnits.hpp"
};
class CfgGroups
{
    #include "\73_innie\URF\URFGroups.hpp"
};