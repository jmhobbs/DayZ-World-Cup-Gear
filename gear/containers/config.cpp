class CfgPatches
{
  class DayZ_World_Cup_Gear_Gear_Containers
  {
    units[]={};
    weapons[]={};
    requiredVersion=0.1;
    requiredAddons[]=
    {
      "DZ_Data",
      "DZ_Gear_Containers"
    };
  };
};
class CfgVehicles
{
  class PlateCarrierPouches;
  class PlateCarrierPouches_WorldCup_USA: PlateCarrierPouches
  {
    hiddenSelections[]=
    {
      "camoGround"
    };
    hiddenSelectionsTextures[]=
    {
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_usa_co.paa",
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_usa_co.paa",
      "DayZ_World_Cup_Gear\characters\vests\data\ballisticvest_usa_co.paa"
    };
  };
};
