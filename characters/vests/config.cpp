class CfgPatches
{
  class DayZ_World_Cup_Gear_Characters_Vests
  {
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Vests"};
    units[] = {};
  };
};
class CfgVehicles
{
  class PlateCarrierVest;

  class PlateCarrierVest_WorldCup_USA: PlateCarrierVest
  {
    hiddenSelections[]=
    {
      "camoGround",
      "camoMale",
      "camoFemale"
    };
    hiddenSelectionsTextures[]=
    {
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_usa_co.paa",
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_usa_co.paa",
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_usa_co.paa"
    };
  };

  class PlateCarrierVest_WorldCup_Brazil: PlateCarrierVest
  {
    hiddenSelections[]=
    {
      "camoGround",
      "camoMale",
      "camoFemale"
    };
    hiddenSelectionsTextures[]=
    {
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_brazil_co.paa",
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_brazil_co.paa",
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_brazil_co.paa"
    };
  };
};
