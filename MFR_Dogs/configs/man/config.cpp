
class CfgPatches
{
	class MFR_Anims
	{
		author="MFR";
		url="";
		requiredAddons[]={};
		requiredVersion=2;
		units[]={};
		weapons[]={};
	};
};

class CfgMovesBasic
{
	class ManActions
	{
		MFR_Carry = "MFR_Carry";
	};

	class Actions
	{
		class NoActions: ManActions
		{
			access = 3;
			ladderOnDown = "LadderCivilOn_Top";
			ladderOnUp = "LadderCivilOn_Top";
			turnSpeed = 1;
			upDegree = -1;
			stance = "ManStanceUndefined";
			limitFast = 5;
			leanRRot = 0;
			leanRShift = 0;
			leanLRot = 0;
			leanLShift = 0;
			useFastMove = 0;

			MFR_Carry[] = {"MFR_Carry","Gesture"};
		};
	};
};

class CfgGesturesMale
{
	class Default;
	class BlendAnims
	{
		MFRheadNo[] = {};
		MFRwholeBody[] = {"Pelvis",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"Camera",0,"weapon",1,"launcher",1,"neck",1,"neck1",1,"head",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftLeg",1,"LeftLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightLeg",1,"RightLegRoll",1,"RightFoot",1,"RightToeBase",1};
		MFRRightArm[] = {"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1};
		MFRRightArmWeapon[] = {"RightShoulder",1,"MFRRightArm",1,"weapon",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1};
		MFRLeftArm[] = {"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1};
		MFRRightAndLeftArm[] = {"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1};
		MFRRightAndLeftArmWeapon[] = {"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"weapon",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1};
		MFRUpperBody[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1};
		MFRBodyFight[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1};
		MFRBodyFullReal[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine1",1,"Spine2",1,"Spine3",1,"Spine",1,"Pelvis",1,"LeftLeg",1,"LeftLegRoll",1,"LeftUpLeg",1,"LeftUpLegRoll",1,"LeftFoot",1,"LeftToeBase",1,"RightLeg",1,"RightLegRoll",1,"RightUpLeg",1,"RightUpLegRoll",1,"RightFoot",1,"RightToeBase",1};
		MFRupperTorso[] = {"head",1,"neck1",1,"neck",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		MFRbodyNoHead[] = {"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1};
		MFRheadDefault[] = {"head",1,"neck1",0.5,"neck",0.5};
		MFRhandsWeapon[] = {"head",1,"neck1",1,"neck",1,"weapon",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
		MFRhandsNoWeapon[] = {"head",1,"neck1",1,"neck",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"MFRRightArm",1,"MFRRightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",1,"Spine1",1,"Spine2",1,"Spine3",1,"pelvis","MaskStart"};
	};
	class States
	{
		class MFR_Base_Anim: Default
		{
			actions = "NoActions";
			enableDirectControl=0;
			canPullTrigger = 0;
			connectAs = "";
			connectFrom[] = {};
			connectTo[] = {};
			disableWeapons = 1;
			hideweapons = 0;
            disableWeaponsLong= 1;
			enableBinocular = 0;
			enableMissile = 0;
			enableOptics = 0;
			equivalentTo = "";
			file = "\A3\anims_f\Data\Anim\Sdr\gst\GestureHi.rtm";
			forceAim = 1;
			headBobMode = 5;
			head="MFRheadNo";
			headBobStrength = 1;
			interpolateFrom[] = {};
			interpolateTo[] = {};
			interpolateWith[] = {};
			interpolationRestart = 0;
			interpolationSpeed = 6;
			looped = 0;
			mask = "MFRBodyFullReal";
			minPlayTime = 0.5;
			preload = 0;
			ragdoll = 0;
			relSpeedMax = 1;
			relSpeedMin = 1;
			showHandGun = 0;
			showItemInHand = 0;
			showItemInRightHand = 0;
			showWeaponAim = 0;
			soundEdge[] = {0.5,1};
			soundEnabled = 1;
			soundOverride = "";
			speed = -2;
			static = 0;
			terminal = 0;
			Walkcycles = 1;
			weaponIK = 0;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {0,1,0.1,0,0.8,0,1,1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {0,1,0.1,0,0.8,0,1,1};
			rightHandIKEnd = 1;
		};
		class MFR_Carry: MFR_Base_Anim
		{
			file = "\MFR_Dogs\anims\man_Carry.rtm";
			actions = "NoActions";
			speed = -2;
			looped = 1;
			preload = 0;
			mask = "MFRUpperBody";
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class CutSceneAnimationBaseSit;
		class HubStanding_idle3;
		class MFR_AnimationBase_CutScene: CutSceneAnimationBaseSit
		{
			affectedByFatigue = 0;
			showWeaponAim = 0;
			canPullTrigger = 0;
			disableWeapons = 1;
			enableOptics = 0;
			weaponLowered = 1;
			connectFrom[] = {};
			connectTo[] = {};
			connectAs = "";
			interpolateWith[] = {};
			interpolateFrom[] = {};
			disableWeaponsLong = 1;
			limitGunMovement = 0.3;
			head = "headDefault";
			static = 1;
			enableBinocular = 0;
			headBobMode = 1;
			canBlendStep = 1;
			headBobStrength = -1;
			forceAim = 1;
			file = "MFR_Dogs\anims\man_carry.rtm";
			soundEdge[] = {0.01};
			InterpolateTo[] = {};
			preload = 0;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
			hasCollShapeSafe = 0;
		};
		class MFR_Carry_Static: MFR_AnimationBase_CutScene
		{
			looped = 1;
			file = "MFR_Dogs\anims\man_carry.rtm";
			speed = -2;
			mask = "MFRUpperBody";
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon", 2};
			canBlendStep = 0;
			minPlayTime= 0.95;
		};
	};
};
