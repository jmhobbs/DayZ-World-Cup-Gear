class CfgPatches
{
  class DayZ_World_Cup_Gear_Characters_Tops
  {
    weapons[] = {};
    requiredVersion = 0.1;
    requiredAddons[] = {"DZ_Data","DZ_Characters","DZ_Characters_Tops"};
    units[] = {};
  };
};
class CfgVehicles
{
  class TShirt_ColorBase;
  class DamageSystem;
  class GlobalHealth;
  class Health;

  class TShirt_WorldCup: TShirt_ColorBase
  {
		scope=2;
		visibilityModifier=0.94999999;
		displayName="$STR_DZWCG_tshirt";
		hiddenSelectionsTextures[]=
		{
			"DayZ_World_Cup_Gear\characters\tops\data\tshirt_g_world_cup_co.paa",
			"DayZ_World_Cup_Gear\characters\tops\data\tshirt_world_cup_co.paa",
			"DayZ_World_Cup_Gear\characters\tops\data\tshirt_world_cup_co.paa"
		};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DayZ_World_Cup_Gear\characters\tops\data\tshirt.rvmat",
								"DZ\characters\tops\Data\tshirt_ground.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DayZ_World_Cup_Gear\characters\tops\data\tshirt.rvmat",
								"DZ\characters\tops\Data\tshirt_ground.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DayZ_World_Cup_Gear\characters\tops\data\tshirt_damage.rvmat",
								"DZ\characters\tops\Data\tshirt_ground_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DayZ_World_Cup_Gear\characters\tops\data\tshirt_damage.rvmat",
								"DZ\characters\tops\Data\tshirt_ground_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DayZ_World_Cup_Gear\characters\tops\data\tshirt_destruct.rvmat",
								"DZ\characters\tops\Data\tshirt_ground_destruct.rvmat"
							}
						}
					};
				};
			};
		};

  };
};
