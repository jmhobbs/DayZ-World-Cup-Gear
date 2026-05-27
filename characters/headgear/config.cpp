class CfgPatches
{
  class DayZ_World_Cup_Gear_Characters_Headgear
  {
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Headgear"};
    units[] = {};
  };
};
class CfgVehicles
{
  class Mich2001Helmet;

  class Mich2001Helmet_WorldCup_USA : Mich2001Helmet
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "DayZ_World_Cup_Gear\characters\headgear\data\mich2001_usa_co.paa",
      "DayZ_World_Cup_Gear\characters\headgear\data\mich2001_usa_co.paa",
      "DayZ_World_Cup_Gear\characters\headgear\data\mich2001_usa_co.paa"
    };
  };

  class Mich2001Helmet_WorldCup_Brazil : Mich2001Helmet
  {
    scope=2;
    hiddenSelectionsTextures[]=
    {
      "DayZ_World_Cup_Gear\characters\headgear\data\mich2001_brazil_co.paa",
      "DayZ_World_Cup_Gear\characters\headgear\data\mich2001_brazil_co.paa",
      "DayZ_World_Cup_Gear\characters\headgear\data\mich2001_brazil_co.paa"
    };
  };
};
