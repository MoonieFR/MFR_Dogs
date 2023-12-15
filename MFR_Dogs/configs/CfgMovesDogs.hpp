class CfgMovesBasic{
	class Default;
	class States;
	class Actions{
		class NoActions;
	};
	class BlendAnims;
};

class CfgMovesDogs: CfgMovesBasic
{
	enableDirectControl = 0;
	skeletonName = "MFR_Dogs_Skeleton";
	gestures = "CfgGesturesDogs";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a","1c","2c","3c","4c","5c","6c","7c","8c"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
	{
		actions = "NoActions";
		adjstance = "m";
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		aimPrecision = 1;
		boundingSphere = 1;
		camShakeFire = 1;
		canBlendStep = 0;
		canPullTrigger = 1;
		canReload = 0;
		collisionShapeSafe = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		disableWeapons = 1;
		disableWeaponsLong = 1;
		duty = -0.5;
		enableAutoActions = 0;
		enableBinocular = 0;
		enableDirectControl = 1;
		enableMissile = 0;
		enableOptics = 0;
		equivalentTo = "";
		file = "";
		forceAim = 0;
		GetOutPara = "";
		hasCollShapeSafe = 0;
		head = "headDefault";
		headBobMode = 0;
		headBobStrength = 0;
		idle = "StandIdle";
		ignoreMinPlayTime[] = {"Die"};
		interpolateFrom[] = {};
		interpolateTo[] = {};
		interpolateWith[] = {};
		interpolationRestart = 0;
		interpolationSpeed = 6;
		leaning = "leaningDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leftHandIKBeg = 0;
		leftHandIKCurve[] = {};
		leftHandIKEnd = 0;
		legs = "legsDefault";
		limitGunMovement = 1;
		looped = 1;
		minPlayTime = 0;
		onLadder = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		preload = 0;
		ragdoll = 0;
		relSpeedMax = 1;
		relSpeedMin = 1;
		rightHandIKBeg = 0;
		rightHandIKCurve[] = {};
		rightHandIKEnd = 0;
		showHandGun = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showWeaponAim = 1;
		soundEdge[] = {0.5,1};
		soundEnabled = 1;
		soundOverride = "";
		speed = 0.5;
		stamina = 1;
		static = 0;
		terminal = 0;
		useIdles = 1;
		variantsAI[] = {""};
		variantsPlayer[] = {};
		visibleSize = 0.6;
		Walkcycles = 1;
		weaponIK = 0;
		weaponLowered = 0;
		weaponObstructed = 0;
		collisionShape = "MFR_Dogs\MFR_Dog_Collshape.p3d";
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};

    class DefaultDie: Default
    {
        aiming = "aimingNo";
        aimingBody = "aimingNo";
        legs = "legsNo";
        head = "headNo";
        disableWeapons = 1;
        interpolationRestart = 1;
        soundEdge[] = {0.45};
        boundingSphere = 1;
        enableDirectControl = 0;
        showWeaponAim = 0;
        canPullTrigger = 0;
        headBobMode = 1;
        headBobStrength = -1;
    };

	class States
	{
		class StandIdle: StandBase
		{
			enableDirectControl = 1;
			actions = "MFR_Dogs_Actions";
			duty = 0.1;
			file = "MFR_Dogs\anims\StandIdle.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			disableWeaponsLong = 1;
			variantsAI[] = {"SitIdle",0.5,"SitIdle",0.1};
			variantsPlayer[] = {"StandIdle",0.5,"SitIdle",0.1};
			speed = -17;
			relSpeedMin = 0.6;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 1;
			connectTo[] = {"WalkFront",0.02,"TrotFront",0.02,"RunFront",0.02,"SneakFront",0.02};
			interpolateTo[] = {"WalkFront",0.02,"TrotFront",0.02,"RunFront",0.02,"SneakFront",0.02,"WalkBack",0.02,"Freefall",0.02,"Die",0.02};
			interpolateFrom[] = {"WalkFront",0.02,"TrotFront",0.02,"RunFront",0.02,,"SneakFront",0.02"WalkBack",0.02,"Freefall",0.02,"Die",0.02};
			enableBinocular = 0;
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKEnd = 1;
			interpolationSpeed = 1;
			soundEdge[] = {1};
			soundOverride = "breath";
			preload = 1;
		};

		class IdleJump: StandIdle
		{
			visibleSize = 0.9;
			variantsPlayer[] = {};
			variantsAI[] = {};
			canBlendStep = 1;
			looped = 0;
			speed = 1;
			minPlayTime = 0.8;
			file = "MFR_Dogs\anims\IdleJump";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wovr.p3d";
			static = 0;
			duty = 1;
			soundEnabled = 1;
			soundOverride = "Walk";
			soundEdge[] = {0.01};
			limitGunMovement = 1;
			interpolationRestart = 0;
			interpolationSpeed = 6;
			interpolateTo[] = {"TrotFront",1};
			interpolateFrom[] = {"TrotFront",0.2};
			ConnectTo[] = {"TrotFront",0.2};
		};

		class StandTrans: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\StandIdle.rtm";
			speed = -15;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "breath";
			soundEnabled = 1;
			connectTo[] = {"StandIdle",0.02};
			interpolateTo[] = {"StandIdle",0.02,"Die",0.02};
			interpolateFrom[] = {"StandIdle",0.02};
			variantsAI[] = {};
		};
		class Stand2Sit: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = 1;
			file = "MFR_Dogs\anims\Stand2Sit.rtm";
			speed = -3;
			looped = 0;
			soundOverride = "breath";
			interpolateFrom[] = {"StandIdle",0.02};
			interpolateTo[] = {"SitIdle",0.02};
			connectTo[] = {"SitIdle",0.02};
			soundEdge[] = {0.25,0.5,0.75,1};
			soundEnabled = 1;
			variantsAI[] = {};
		};
		///////////// WALK /////////////

		class WalkFront: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\WalkFront.rtm";
			speed = -1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class SneakFront: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\SneakFront.rtm";
			speed = -2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class WalkBack: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\WalkBack.rtm";
			speed = -1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			interpolateTo[] = {"StandIdle",0.02};
			interpolateFrom[] = {"WalkFront",0.02,"TrotFront",0.02,"RunFront",0.02,"Die",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};

		class LimpF: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\LimpFront.rtm";
			speed = -2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			interpolateFrom[] = {"StandIdle",0.02,"TrotFront",0.02,"RunFront",0.02,"Die",0.02};
			interpolateTo[] = {"StandIdle",0.02};
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class LimpB: LimpF
		{
			actions = "MFR_Dogs_Actions";
			file = "MFR_Dogs\anims\LimpFront.rtm";
			speed = -2;
			connectTo[] = {};
			variantsAI[] = {};
		};

		///////////// TROT /////////////

		class TrotFront: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\TrotFront.rtm";
			speed = -0.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};

		///////////// CANTER /////////////

		class RunFront: StandIdle
		{
			actions = "MFR_dog_fastactions";
			file = "MFR_Dogs\anims\SprintFront.rtm";
			duty = -0.5;
			speed = 2;
			stamina = -1;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};

		///////////// SPRINT /////////////
		class SprintFront: StandIdle
		{
			actions = "MFR_dog_fastactions";
			file = "MFR_Dogs\anims\SprintFront.rtm";
			duty = 0.5;
			stamina = -1;
			speed = 2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};

		class Aggresive: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -1;
			file = "MFR_Dogs\anims\Aggresive.rtm";
			speed = -3;
			looped = 0;
			soundEdge[] = {1};
			soundOverride = "BarkAggresive";
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
			interpolateTo[] = {};
			interpolateFrom[] = {"StandIdle",0.001};
		};
		class AttackHigh: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = 1;
			file = "MFR_Dogs\anims\BiteHigh.rtm";
			speed = -1;
			looped = 0;
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
			interpolateTo[] = {"AttackTrans",0.001};
		};
		class AttackTrans: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\BiteHigh.rtm";
			speed = 20;
			looped = 0;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Sprint";
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
			interpolateTo[] = {"StandIdle",0.001};
		};
		class DogPet: AttackHigh
		{
			actions = "MFR_Dogs_Actions";
			duty = -1;
			file = "MFR_Dogs\anims\petted.rtm";
			speed = 1;
			looped = 0;
			soundEdge[] = {0.2};
			soundEnabled = 0;
			connectTo[] = {};
			variantsAI[] = {};
			interpolateTo[] = {};
			interpolateFrom[] = {"StandIdle",0.0001};
		};
		///////////// TURN/STRAFE /////////////

		class TurnLeft: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\TurnLeft.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			interpolateTo[] = {"StandIdle",0.02};
			interpolateFrom[] = {"StandIdle",0.02,"WalkFront",0.02,"TrotFront",0.02,"RunFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};
		class TurnRight: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\TurnRight.rtm";
			speed = -1.5;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "Walk";
			soundEnabled = 1;
			interpolateTo[] = {"StandIdle",0.02};
			interpolateFrom[] = {"StandIdle",0.02,"WalkFront",0.02,"TrotFront",0.02,"RunFront",0.02};
			connectTo[] = {};
			variantsAI[] = {};
		};

		class SitIdle: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\SitIdle.rtm";
			speed = -17;
			soundOverride = "breath";
			interpolateFrom[] = {"Stand2Sit",0.02};
			interpolateTo[] = {"Sit2Stand",0.02};
			soundEdge[] = {0.25,0.5,0.75,1};
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};
		class Sit2Stand: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\Sit2Stand.rtm";
			speed = -3;
			soundOverride = "breath";
			looped = 0;
			interpolateFrom[] = {"SitIdle",0.02};
			interpolateTo[] = {"StandIdle",0.02};
			connectTo[] = {"StandIdle",0.02};
			soundEdge[] = {0.25,0.5,0.75,1};
			soundEnabled = 1;
			variantsAI[] = {};
		};

		class LyingIdle: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\Lying.rtm";
			speed = -17;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundEnabled = 1;
			soundOverride = "breath";
			connectTo[] = {};
			variantsAI[] = {};
		};
		class DogOnShoulders: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			looped = 1;
			file = "MFR_Dogs\anims\carried.rtm";
			speed = -3;
			interpolateFrom[] = {"SitIdle",0.02};
			interpolateTo[] = {};
			soundEdge[] = {0.25,0.5,0.75,1};
			soundEnabled = 1;
			soundOverride = "breath";
			connectTo[] = {};
			variantsAI[] = {};
		};
		class LyingToStand: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -0.7;
			file = "MFR_Dogs\anims\LyingToStand.rtm";
			speed = -2;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundEnabled = 1;
			connectTo[] = {};
			variantsAI[] = {};
		};

		class DogFreefall: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -1;
			file = "MFR_Dogs\anims\LimpFront.rtm";
			connectTo[] = {};
			interpolateFrom[] = {"StandIdle",0.02};
			speed = -3;
			stamina = -1;
			variantsAI[] = {};
		};
		class DogParaIdle: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -1;
			file = "MFR_Dogs\anims\Attached.rtm";
			connectTo[] = {};
			interpolateFrom[] = {"StandIdle",0.02};
			interpolateTo[] = {};
			speed = -1;
			stamina = -1;
			variantsAI[] = {};
		};
		class DogParaMoving: StandIdle
		{
			actions = "MFR_Dogs_Actions";
			duty = -1;
			file = "MFR_Dogs\anims\DogParaMoving.rtm";
			connectTo[] = {};
			interpolateFrom[] = {"StandIdle",0.02};
			interpolateTo[] = {};
			speed = -1;
			stamina = -1;
			variantsAI[] = {};
		};
		class Die: DefaultDie
		{
			actions = "NoActions";
			file = "MFR_Dogs\anims\die.rtm";
			speed = -2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {};
			variantAfter[] = {0,0,0};
			terminal = 1;
		};
	};
	class Actions: Actions
	{
		class NoActions: NoActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
		};
		class MFR_Dogs_Actions: NoActions
		{
	        WalkF = "SneakFront";
	        WalkLF = "";
	        WalkRF = "";
	        WalkLB = "";
	        WalkRB = "";
	        WalkB = "WalkBack";
	        WalkL = "TurnLeft";
	        WalkR = "TurnRight";

	        StartFreefall = "DogFreefall";
	        DogParaIdle = "DogParaIdle";
	        DogParaMoving = "DogParaMoving";

	        PlayerWalkF = "SneakFront";
	        PlayerWalkLF = "";
	        PlayerWalkRF = "";
	        PlayerWalkLB = "";
	        PlayerWalkRB = "";
	        PlayerWalkB = "WalkBack";
	        PlayerWalkL = "TurnLeft";
	        PlayerWalkR = "TurnRight";

	        SlowF = "WalkFront";
	        SlowB = "WalkBack";
	        SlowLF = "";
	        SlowRF = "";
	        SlowLB = "";
	        SlowRB = "";
	        SlowL = "TurnLeft";
	        SlowR = "TurnRight";

	        PlayerSlowF = "WalkFront";
	        PlayerSlowB = "WalkBack";
	        PlayerSlowLF = "";
	        PlayerSlowRF = "";
	        PlayerSlowLB = "";
	        PlayerSlowRB = "";
	        PlayerSlowL = "TurnLeft";
	        PlayerSlowR = "TurnRight";

	        TactF = "TrotFront";
	        TactLF = "";
	        TactRF = "";
	        TactL = "TurnLeft";
	        TactR = "TurnRight";
	        TactLB = "";
	        TactRB = "";
	        TactB = "WalkBack";
	        PlayerTactF = "TrotFront";
	        PlayerTactLF = "";
	        PlayerTactRF = "";
	        PlayerTactL = "TurnLeft";
	        PlayerTactR = "TurnRight";
	        PlayerTactLB = "";
	        PlayerTactRB = "";
	        PlayerTactB = "WalkBack";

	        FastF = "RunFront";

	        LimpF = "LimpF";
	        LimpL = "";
	        LimpR = "";
	        LimpB = "LimpB";

			Stop = "StandIdle";
			StopRelaxed = "SitIdle";

			GetOver = "IdleJump";

			TurnL = "TurnLeft";
			TurnR = "TurnRight";

			Down = "";
			Up = "";
			TurnLRelaxed = "TurnLeft";
			TurnRRelaxed = "TurnRight";

			Default = "StandIdle";

			EvasiveForward = "RunFront";

			saluteOff = "StandIdle";

     		Salute = "SitIdle";
     		SitDown = "Stand2Sit";

			Stand = "StandIdle";
			PlayerStand = "StandIdle";

			Combat = "Aggresive";
			CanNotMove = "StandIdle";
			Civil = "StandIdle";
			CivilLying = "StandIdle";
			FireNotPossible = "StandIdle";
			Die = "Die";

	        Mortar_01_F_Turret = "SitIdle";
	        Static_Turret = "SitIdle";
	        Mk201_Turret = "SitIdle";
	        Mk34_Turret = "SitIdle";
	        chopperLight_L_In_H = "SitIdle";
	        chopperLight_L_Out_H = "SitIdle";
	        chopperLight_L_static_H = "SitIdle";
	        chopperLight_R_in_H = "SitIdle";
	        chopperLight_R_out_H = "SitIdle";
	        chopperLight_R_static_H = "SitIdle";
	        chopperLight_RP_static_H = "SitIdle";
	        chopperLight_C_L_idleA_H = "SitIdle";
	        chopperLight_C_L_idleB_H = "SitIdle";
	        chopperLight_C_L_idleC_H = "SitIdle";
	        chopperLight_C_L_idleD_H = "SitIdle";
	        chopperLight_C_L_static_H = "SitIdle";
	        chopperLight_C_LIn_H = "SitIdle";
	        chopperLight_C_LOut_H = "SitIdle";
	        chopperLight_C_R_idleA_H = "SitIdle";
	        chopperLight_C_R_idleB_H = "SitIdle";
	        chopperLight_C_R_idleC_H = "SitIdle";
	        chopperLight_C_R_idleD_H = "SitIdle";
	        chopperLight_C_R_static_H = "SitIdle";
	        chopperLight_C_Rin_H = "SitIdle";
	        chopperLight_C_Rout_H = "SitIdle";
	        chopperLight_CB_static_H = "SitIdle";
	        bench_Heli_Light_01_get_in = "SitIdle";
	        bench_Heli_Light_01_get_out = "SitIdle";
	        ChopperHeavy_R_static_H = "SitIdle";
	        ChopperHeavy_L_Static_H = "SitIdle";
	        ChopperHeavy_LP_Static_H = "SitIdle";
	        ChopperHeavy_R_GetOut_H = "SitIdle";
	        ChopperHeavy_R_GetIn_H = "SitIdle";
	        ChopperHeavy_L_GetOut_H = "SitIdle";
	        ChopperHeavy_L_GetIn_H = "SitIdle";
	        chopperheavy_Lux_getout_H = "SitIdle";
	        ChopperHeavy_Lux_GetIn_H = "SitIdle";
	        PBX_Driver = "SitIdle";
	        PBX_Cargo01 = "SitIdle";
	        PBX_Cargo02 = "SitIdle";
	        PBX_Cargo03 = "SitIdle";
	        RHIB_Driver = "SitIdle";
	        RHIB_Gunner = "SitIdle";
	        RHIB_Cargo = "SitIdle";
	        Zodiac_Driver = "SitIdle";
	        Zodiac_Cargo01 = "SitIdle";
	        Zodiac_Cargo02 = "SitIdle";
	        Zodiac_Cargo03 = "SitIdle";
	        Zodiac_Cargo04 = "SitIdle";
	        Truck_Driver = "SitIdle";
	        Truck_Cargo01 = "SitIdle";
	        Truck_Cargo02 = "SitIdle";
	        Truck_Cargo03 = "SitIdle";
	        Truck_Cargo04 = "SitIdle";
	        Truck_02_Driver = "SitIdle";
	        Driver_High01 = "SitIdle";
	        Driver_low01 = "SitIdle";
	        Driver_mid01 = "SitIdle";
	        pilot_Heli_Transport_01 = "SitIdle";
	        gunner_Heli_Transport_01 = "SitIdle";
	        GetInHeli_Transport_01Cargo = "SitIdle";
	        GetInHeli_Transport_02Cargo = "SitIdle";
	        driver_hemtt = "SitIdle";
	        driver_tractor = "SitIdle";
	        GetInOffroad = "SitIdle";
	        GetInOffroadBack = "SitIdle";
	        GetInOffroadCargo = "SitIdle";
	        GetInHemttBack = "SitIdle";
	        driver_offroad01 = "SitIdle";
	        driver_boat01 = "SitIdle";
	        driver_MRAP_03 = "SitIdle";
	        GetInMRAP_03 = "SitIdle";
	        driver_sdv = "SitIdle";
	        commander_sdv = "SitIdle";
	        commander_MRAP_03 = "SitIdle";
	        gunner_MRAP_03 = "SitIdle";
	        gunner_MRAP_03_lookingatmonitor = "SitIdle";
	        GetInAMV_cargo = "SitIdle";
	        driver_mantis = "SitIdle";
	        GetInHeli_Light_01bench = "SitIdle";
	        GetOutHeli_Light_01bench = "SitIdle";
	        GetInMantis = "SitIdle";
	        GetOutMantis = "SitIdle";
	        driver_quadbike = "SitIdle";
	        driver_ugv_01 = "SitIdle";
	        GetInQuadbike = "SitIdle";
	        GetOutQuadbike = "SitIdle";
	        gunner_static_low01 = "SitIdle";
	        gunner_staticlauncher = "SitIdle";
	        gunner_mortar = "SitIdle";
	        gunner_standup01 = "SitIdle";
	        gunner_offroad01 = "SitIdle";
	        truck_02_mrl_gunner = "SitIdle";
	        driver_scooter_01 = "SitIdle";
	        passenger_scooter_01 = "SitIdle";
	        passenger_scooter_02 = "SitIdle";
	        driver_boat_transport_02 = "SitIdle";
	        driver_MRAP_01 = "SitIdle";
	        gunner_MRAP_01 = "SitIdle";
	        driver_Van_01 = "SitIdle";
	        driver_Truck_02 = "SitIdle";
	        driver_Truck_03 = "SitIdle";
	        passenger_flatground_crosslegs = "SitIdle";
	        passenger_flatground_leanleft = "SitIdle";
	        passenger_flatground_leanright = "SitIdle";
	        passenger_flatground_generic01 = "SitIdle";
	        passenger_flatground_generic02 = "SitIdle";
	        passenger_flatground_generic03 = "SitIdle";
	        passenger_flatground_generic04 = "SitIdle";
	        passenger_flatground_generic05 = "SitIdle";
	        passenger_generic01_foldhands = "SitIdle";
	        passenger_generic02_foldhands = "SitIdle";
	        passenger_generic01_leanleft = "SitIdle";
	        passenger_generic01_leanright = "SitIdle";
	        passenger_MRAP_01_back = "SitIdle";
	        passenger_MRAP_01_front = "SitIdle";
	        passenger_VAN_codriver01 = "SitIdle";
	        passenger_VAN_codriver02 = "SitIdle";
	        passenger_low01 = "SitIdle";
	        passenger_quadbike = "SitIdle";
	        passenger_apc_generic01 = "SitIdle";
	        passenger_apc_generic02 = "SitIdle";
	        passenger_apc_generic02b = "SitIdle";
	        passenger_apc_generic03 = "SitIdle";
	        passenger_apc_generic03_low = "SitIdle";
	        passenger_apc_generic04 = "SitIdle";
	        passenger_apc_narrow_generic01 = "SitIdle";
	        passenger_apc_narrow_generic01_low = "SitIdle";
	        passenger_apc_narrow_generic02 = "SitIdle";
	        passenger_apc_narrow_generic02_low = "SitIdle";
	        passenger_apc_narrow_generic03 = "SitIdle";
	        passenger_apc_narrow_generic03still = "SitIdle";
	        passenger_apc_generic01_ns = "SitIdle";
	        passenger_apc_generic02_ns = "SitIdle";
	        passenger_apc_generic02b_ns = "SitIdle";
	        passenger_apc_generic03_ns = "SitIdle";
	        passenger_apc_generic04_ns = "SitIdle";
	        passenger_apc_narrow_generic01_ns = "SitIdle";
	        passenger_apc_narrow_generic02_ns = "SitIdle";
	        passenger_apc_narrow_generic03_ns = "SitIdle";
	        passenger_apc_narrow_generic03still_ns = "SitIdle";
	        passenger_sdv = "SitIdle";
	        passenger_boat_rightrear = "SitIdle";
	        passenger_boat_holdright = "SitIdle";
	        passenger_boat_holdright2 = "SitIdle";
	        passenger_boat_holdleft = "SitIdle";
	        passenger_boat_holdleft2 = "SitIdle";
	        passenger_MRAP_03exgunner = "SitIdle";
	        passenger_mantisrear = "SitIdle";
	        passenger_injured_medevac_truck01 = "SitIdle";
	        passenger_injured_medevac_truck02 = "SitIdle";
	        passenger_injured_medevac_truck03 = "SitIdle";
	        GetInQuadbike_cargo = "SitIdle";
	        GetOutQuadbike_cargo = "SitIdle";
	        GetInMortar = "SitIdle";
	        GetOutMortar = "SitIdle";
	        Mortar_Gunner = "SitIdle";
	        GetInSpeedboat = "SitIdle";
	        GetOutSpeedboat = "SitIdle";
	        GetInAssaultBoat = "SitIdle";
	        GetOutAssaultBoat = "SitIdle";
	        GetOutPara = "SitIdle";
	        pilot_Heli_Attack_01 = "SitIdle";
	        driver_apcwheeled1_out = "SitIdle";
	        commander_apcwheeled1_out = "SitIdle";
	        commander_apcwheeled1_in = "SitIdle";
	        gunner_apcwheeled1_out = "SitIdle";
	        gunner_apcwheeled1_in = "SitIdle";
	        driver_apcwheeled2_out = "SitIdle";
	        driver_apcwheeled2_in = "SitIdle";
	        driver_apcwheeled3_in = "SitIdle";
	        driver_apctracked3_out = "SitIdle";
	        driver_apctracked3_in = "SitIdle";
	        commander_apcwheeled2_out = "SitIdle";
	        commander_apcwheeled2_in = "SitIdle";
	        commander_apcwheeled2hi_out = "SitIdle";
	        commander_apcwheeled2hi_in = "SitIdle";
	        commander_apctracked1_out = "SitIdle";
	        commander_apctracked1rcws_out = "SitIdle";
	        commander_apctracked1_in = "SitIdle";
	        commander_apctracked1aa_out = "SitIdle";
	        commander_apctracked1aa_in = "SitIdle";
	        commander_apctracked3_out = "SitIdle";
	        commander_apctracked3_in = "SitIdle";
	        gunner_apcwheeled3_in = "SitIdle";
	        gunner_apctracked1aa_out = "SitIdle";
	        gunner_apctracked1aa_in = "SitIdle";
	        gunner_apctracked3_out = "SitIdle";
	        gunner_apctracked3_in = "SitIdle";
	        apcwheeled3_slot1_out = "SitIdle";
	        apctracked2_slot1_out = "SitIdle";
	        apctracked2_slot2_out = "SitIdle";
	        apcwheeled3_slot1_in = "SitIdle";
	        apctracked2_slot1_in = "SitIdle";
	        apctracked2_slot2_in = "SitIdle";
	        mbt1_slot1_out = "SitIdle";
	        mbt1_slot2_out = "SitIdle";
	        mbt1c_slot2_out = "SitIdle";
	        mbt2_slot1_out = "SitIdle";
	        mbt2_slot2_out = "SitIdle";
	        mbt2_slot2a_out = "SitIdle";
	        mbt2_slot2b_out = "SitIdle";
	        mbt1_slot1_in = "SitIdle";
	        mbt1_slot2_in = "SitIdle";
	        mbt1c_slot2_in = "SitIdle";
	        mbt2_slot1_in = "SitIdle";
	        mbt2_slot2_in = "SitIdle";
	        mbt2_slot2a_in = "SitIdle";
	        mbt2_slot2b_in = "SitIdle";
	        crew_tank01_in = "SitIdle";
	        crew_tank01_out = "SitIdle";
	        commander_mbt3_in = "SitIdle";
	        commander_mbt3_out = "SitIdle";
	        gunner_mbt3_in = "SitIdle";
	        gunner_mbt3_out = "SitIdle";
	        Heli_Attack_01_Pilot = "SitIdle";
	        Heli_Attack_01_Gunner = "SitIdle";
	        Heli_Attack_01_Pilot_Enter = "SitIdle";
	        Heli_Attack_01_Pilot_Exit = "SitIdle";
	        Heli_Attack_01_Gunner_Enter = "SitIdle";
	        Heli_Attack_01_Gunner_Exit = "SitIdle";
	        Para_Pilot = "SitIdle";
	        Heli_Light_02_Cargo = "SitIdle";
	        Heli_Light_02_Pilot = "SitIdle";
	        Heli_Light_02_Gunner = "SitIdle";
	        pilot_Heli_Light_02 = "SitIdle";
	        pilot_Heli_Light_02_Enter = "SitIdle";
	        pilot_Heli_Light_02_Exit = "SitIdle";
	        copilot_Heli_Light_02 = "SitIdle";
	        copilot_Heli_Light_02_Enter = "SitIdle";
	        copilot_Heli_Light_02_Exit = "SitIdle";
	        pilot_Heli_Light_03 = "SitIdle";
	        pilot_Heli_Light_03_Enter = "SitIdle";
	        pilot_Heli_Light_03_Exit = "SitIdle";
	        copilot_Heli_Light_03 = "SitIdle";
	        copilot_Heli_Light_03_Enter = "SitIdle";
	        copilot_Heli_Light_03_Exit = "SitIdle";
	        Heli_Attack_02_Cargo = "SitIdle";
	        Heli_Attack_02_Pilot = "SitIdle";
	        Heli_Attack_02_Gunner_SettleIn = "SitIdle";
	        Gunner_HeliTransport3_1 = "SitIdle";
	        Gunner_HeliTransport3_2 = "SitIdle";
	        pilot_plane_cas_01 = "SitIdle";
	        pilot_plane_cas_01_Enter = "SitIdle";
	        pilot_plane_cas_01_Exit = "SitIdle";
	        pilot_plane_cas_02 = "SitIdle";
	        pilot_plane_cas_02_Enter = "SitIdle";
	        pilot_plane_cas_02_Exit = "SitIdle";
	        Plane_Fighter_03_pilot = "SitIdle";
	        Driver_MBT_01_cannon_F_in = "SitIdle";
	        Gunner_MBT_01_cannon_F_in = "SitIdle";
	        Commander_MBT_01_cannon_F_in = "SitIdle";
	        Commander_MBT_01_cannon_F_out = "SitIdle";
	        Commander_MBT_01_arty_F_in = "SitIdle";
	        Commander_MBT_01_arty_F_out = "SitIdle";
	        Gunner_MBT_01_arty_F_in = "SitIdle";
	        Gunner_MBT_01_arty_F_out = "SitIdle";
	        Gunner_MBT_01_mlrs_F_in = "SitIdle";
	        Driver_MBT_02_F_in = "SitIdle";
	        Gunner_MBT_02_cannon_F_in = "SitIdle";
	        Gunner_MBT_02_cannon_F_out = "SitIdle";
	        Commander_MBT_02_cannon_F_in = "SitIdle";
	        Commander_MBT_02_cannon_F_out = "SitIdle";
	        Gunner_MBT_02_arty_F_in = "SitIdle";
	        Gunner_MBT_02_arty_F_out = "SitIdle";
	        Commander_MBT_02_arty_F_in = "SitIdle";
	        Driver_MBT_03_cannon_F_in = "SitIdle";
	        Driver_MBT_03_cannon_F_out = "SitIdle";
	        Gunner_MBT_03_cannon_F_in = "SitIdle";
	        Gunner_MBT_03_cannon_F_out = "SitIdle";
	        Commander_MBT_03_cannon_F_in = "SitIdle";
	        Commander_MBT_03_cannon_F_out = "SitIdle";
	        Driver_APC_tracked_01_crv_in = "SitIdle";
	        Gunner_APC_tracked_01_crv_in = "SitIdle";
	        Commander_APC_tracked_01_crv_in = "SitIdle";
	        Commander_APC_tracked_01_crv_out = "SitIdle";
	        Gunner_APC_tracked_01_aa_F_in = "SitIdle";
	        Gunner_APC_tracked_01_aa_F_out = "SitIdle";
	        Commander_APC_tracked_01_aa_F_in = "SitIdle";
	        Commander_APC_tracked_01_aa_F_out = "SitIdle";
	        Driver_APC_tracked_02_F_in = "SitIdle";
	        Driver_APC_tracked_02_F_out = "SitIdle";
	        Gunner_APC_tracked_02_cannon_F_in = "SitIdle";
	        Gunner_APC_tracked_02_cannon_F_out = "SitIdle";
	        Commander_APC_tracked_02_cannon_F_in = "SitIdle";
	        Commander_APC_tracked_02_cannon_F_out = "SitIdle";
	        Gunner_APC_tracked_02_aa_F_in = "SitIdle";
	        Gunner_APC_tracked_02_aa_F_out = "SitIdle";
	        Commander_APC_tracked_02_aa_F_in = "SitIdle";
	        Commander_APC_tracked_02_aa_F_out = "SitIdle";
	        Driver_APC_tracked_03_cannon_F_in = "SitIdle";
	        Driver_APC_tracked_03_cannon_F_out = "SitIdle";
	        Gunner_APC_tracked_03_cannon_F_in = "SitIdle";
	        Gunner_APC_tracked_03_cannon_F_out = "SitIdle";
	        Commander_APC_tracked_03_cannon_F_in = "SitIdle";
	        Commander_APC_tracked_03_cannon_F_out = "SitIdle";
	        Driver_APC_Wheeled_01_in = "SitIdle";
	        Driver_APC_Wheeled_01_out = "SitIdle";
	        Gunner_APC_Wheeled_01_in = "SitIdle";
	        Gunner_APC_Wheeled_01_out = "SitIdle";
	        Commander_APC_Wheeled_01_in = "SitIdle";
	        Commander_APC_Wheeled_01_out = "SitIdle";
	        Driver_APC_Wheeled_02_rcws_F_in = "SitIdle";
	        Driver_APC_Wheeled_02_rcws_F_out = "SitIdle";
	        Commander_APC_Wheeled_02_rcws_F_in = "SitIdle";
	        Commander_APC_Wheeled_02_rcws_F_out = "SitIdle";
	        Driver_APC_Wheeled_03_cannon_F_in = "SitIdle";
	        Driver_APC_Wheeled_03_cannon_F_out = "SitIdle";
	        Gunner_APC_Wheeled_03_cannon_F_in = "SitIdle";
	        Commander_APC_Wheeled_03_cannon_F_in = "SitIdle";
	        Commander_APC_Wheeled_03_cannon_F_out = "SitIdle";
	        Gunner_Offroad_01_AT_F = "SitIdle";
	        Gunner_Offroad_02_AT_F = "SitIdle";
	        Gunner_Offroad_02_LMG_F = "SitIdle";
	        Gunner_LSV_01_AT_F = "SitIdle";
	        Gunner_LSV_02_AT_F = "SitIdle";
	        Kart_driver = "SitIdle";
	        passenger_inside_1 = "SitIdle";
	        passenger_inside_2 = "SitIdle";
	        passenger_inside_3 = "SitIdle";
	        passenger_inside_4 = "SitIdle";
	        passenger_inside_5 = "SitIdle";
	        passenger_inside_6 = "SitIdle";
	        passenger_inside_7 = "SitIdle";
	        passenger_inside_8 = "SitIdle";
	        passenger_bench_1 = "SitIdle";
	        passenger_boat_1 = "SitIdle";
	        passenger_boat_2 = "SitIdle";
	        passenger_boat_3 = "SitIdle";
	        passenger_boat_4 = "SitIdle";
	        passenger_flatground_1 = "SitIdle";
	        passenger_flatground_2 = "SitIdle";
	        passenger_flatground_3 = "SitIdle";
	        passenger_flatground_4 = "SitIdle";
	        vehicle_turnout_1 = "SitIdle";
	        vehicle_turnout_2 = "SitIdle";
	        vehicle_coshooter_1 = "SitIdle";
	        vehicle_passenger_stand_2 = "SitIdle";
	        passenger_flatground_4_vehicle_passenger_stand_1 = "SitIdle";
	        vehicle_passenger_stand_1_passenger_flatground_4 = "SitIdle";
	        pilot_Heli_Transport_03 = "SitIdle";
	        pilot_Heli_Transport_04 = "SitIdle";
	        Pilot_Plane_Civil_01 = "SitIdle";
	        Pilot_Plane_Civil_01_Enter = "SitIdle";
	        Pilot_Plane_Civil_01_Exit = "SitIdle";
	        Copilot_Plane_Civil_01 = "SitIdle";
	        Copilot_Plane_Civil_01_Enter = "SitIdle";
	        Copilot_Plane_Civil_01_Exit = "SitIdle";
	        Passenger_Plane_Civil_01_L = "SitIdle";
	        Passenger_Plane_Civil_01_R = "SitIdle";
	        driver_lsv_01 = "SitIdle";
	        gunner_lsv_01 = "SitIdle";
	        driver_lsv_02 = "SitIdle";
	        gunner_lsv_02 = "SitIdle";
	        frontGunner_lsv_01 = "SitIdle";
	        pilot_VTOL_01 = "SitIdle";
	        copilot_VTOL_01 = "SitIdle";
	        gunner_01_VTOL_01_armed = "SitIdle";
	        gunner_02_VTOL_01_armed = "SitIdle";
	        gunner_01_VTOL_01_vehicle = "SitIdle";
	        gunner_02_VTOL_01_vehicle = "SitIdle";
	        pilot_VTOL_02 = "SitIdle";
	        gunner_01_VTOL_02 = "SitIdle";
	        Pilot_Plane_Fighter_Ejection = "SitIdle";
	        Pilot_Plane_Fighter_01 = "SitIdle";
	        Pilot_Plane_Fighter_01_Enter = "SitIdle";
	        Pilot_Plane_Fighter_01_Exit = "SitIdle";
	        Pilot_Plane_Fighter_02 = "SitIdle";
	        Pilot_Plane_Fighter_02_Enter = "SitIdle";
	        Pilot_Plane_Fighter_02_Exit = "SitIdle";
	        Pilot_Plane_Fighter_04 = "SitIdle";
	        Pilot_Plane_Fighter_04_Enter = "SitIdle";
	        Pilot_Plane_Fighter_04_Exit = "SitIdle";
	        Driver_Van_02 = "SitIdle";
	        CoDriver_Van_02 = "SitIdle";
	        Passenger_Van_02_Medevac_Front = "SitIdle";
	        Passenger_Van_02_Medevac_Back = "SitIdle";
	        Passenger_Van_02_Transport_Left_1 = "SitIdle";
	        Passenger_Van_02_Transport_Left_2 = "SitIdle";
	        Passenger_Van_02_Transport_Left_3 = "SitIdle";
	        Passenger_Van_02_Transport_Right_1 = "SitIdle";
	        Passenger_Van_02_Transport_Right_2 = "SitIdle";
	        Passenger_Van_02_Transport_Right_3 = "SitIdle";
	        Passenger_Van_02_Transport_Middle_3 = "SitIdle";
	        Patient_Van_02_Medevac_Front = "SitIdle";
	        Patient_Van_02_Medevac_Back = "SitIdle";
	        Driver_MBT_04_in = "SitIdle";
	        Driver_MBT_04_out = "SitIdle";
	        Gunner_MBT_04_in = "SitIdle";
	        Commander_MBT_04_in = "SitIdle";
	        Commander_MBT_04_out = "SitIdle";
	        Driver_AFV_Wheeled_01_in = "SitIdle";
	        Driver_AFV_Wheeled_01_out = "SitIdle";
	        Gunner_AFV_Wheeled_01_in = "SitIdle";
	        Gunner_AFV_Wheeled_01_out = "SitIdle";
	        Commander_AFV_Wheeled_01_in = "SitIdle";
	        Commander_AFV_Wheeled_01_out = "SitIdle";
	        Driver_LT_01_AT_F_in = "SitIdle";
	        Driver_LT_01_AT_F_out = "SitIdle";
	        Commander_LT_01_AT_F_in = "SitIdle";
	        Commander_LT_01_AT_F_out = "SitIdle";

			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
		};

		class MFR_dog_Limp: MFR_Dogs_Actions
		{
			LimpF = "LimpF";
			LimpB = "LimpB";
			EvasiveForward = "LimpF";

			TurnL = "TurnLeft";
			TurnR = "TurnRight";

			Stop = "StandIdle";
			StopRelaxed = "StandIdle";

			Die = "Die";

			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 1;
		};
		class MFR_dog_fastactions: MFR_Dogs_Actions
		{
			FastF = "RunFront";
			EvasiveForward = "RunFront";
			Die = "Die";
			TurnL = "TurnLeft";
			TurnR = "TurnRight";
			turnSpeed = 16;
			limitFast = 5.5;
			useFastMove = 1;
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"Head",1,"Neck",1,"Neck1",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"Head",1,"Neck",1,"Neck1",1};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
