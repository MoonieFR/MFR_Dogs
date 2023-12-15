class CfgGesturesDogs
{
    skeletonName = "MFR_Dogs_Skeleton";

    class ManActions{};

    class Actions
    {
        class NoActions: ManActions
        {
            turnSpeed = 1;
            upDegree = -1;
            limitFast = 5;
            leanRRot = 0;
            leanRShift = 0;
            leanLRot = 0;
            leanLShift = 0;
            useFastMove = 0;
            stance = "";

            Dog_Bark_01[] = {"Dog_Bark_01","Gesture"};
            Dog_Bite_01[] = {"Dog_Bite_01","Gesture"};
        };
    };
    class DogDefault
    {
        actions = "NoActions";
        file = "";
        looped = 1;
        speed = 0.5;
        relSpeedMin = 0.5;
        relSpeedMax = 1;
        soundEnabled = 0;
        soundOverride = "";
        soundEdge[] = {0.5,1};
        terminal = 0;
        ragdoll = 0;
        equivalentTo = "";
        connectAs = "";
        connectFrom[] = {};
        connectTo[] = {};
        interpolateWith[] = {};
        interpolateTo[] = {};
        interpolateFrom[] = {};
        mask = "headFull";
        interpolationSpeed = 6;
        interpolationRestart = 1;
        preload = 0;
        disableWeapons = 1;
        enableOptics = 0;
        showWeaponAim = 0;
        enableMissile = 0;
        enableBinocular = 0;
        showItemInHand = 0;
        showItemInRightHand = 0;
        showHandGun = 0;
        canPullTrigger = 0;
        Walkcycles = 1;
        headBobMode = 0;
        headBobStrength = 0;
        leftHandIKBeg = 0;
        leftHandIKEnd = 0;
        rightHandIKBeg = 0;
        rightHandIKEnd = 0;
        leftHandIKCurve[] = {};
        rightHandIKCurve[] = {};
        forceAim = 0;
    };

    class BlendAnims
    {
        class MaskStart
        {
            weight = 0.85;
        };
        class MaskStartDecreased
        {
            weight = 0.35;
        };

        empty[] = {};
        headFull[] ={"RigHead",1,"RigLEar1",1,"RigREar1",1,"RigLEyelid",1,"RigREyelid",1,"RigLEye1",1,"RigREye1",1};
        FullBody[] ={"RigPelvis",1,"RigSpine1",1,"RigSpine2",1,"RigSpine3",1,"RigChest",1,"RigLFLegCollarbone",1,"RigNeck1",1,"RigNeck2",1,"RigNeck3",1,"RigNeck4",1,"RigHead",1,"RigJaw1",1,"RigTongue1",1,"RigTongue2",1,"RigTongue3",1,"RigLFLeg1",1,"RigLFLeg2",1,"RigLFLeg3",1,"RigLFLegAnkle",1,"RigLFLegDigit11",1,"RigLBLeg1",1,"RigLBLeg2",1,"RigLBLeg3",1,"RigLBLegAnkle",1,"RigLBLegDigit11",1,"RigRFLeg1",1,"RigRFLeg2",1,"RigRFLeg3",1,"RigRFLegAnkle",1,"RigRFLegDigit11",1,"RigRBLeg1",1,"RigRBLeg2",1,"RigRBLeg3",1,"RigRBLegAnkle",1,"RigRBLegDigit11",1,"RigTail1",1,"RigTail2",1,"RigTail3",1,"RigTail4",1,"RigTail5",1,"RigTail6",1,"RigLEar1",1,"RigREar1",1,"RigLEyelid",1,"RigREyelid",1,"RigLEye1",1,"RigREye1",1};
        UpperBody[] ={"RigLFLegCollarbone",1,"RigNeck1",1,"RigNeck2",1,"RigNeck3",1,"RigNeck4",1,"RigHead",1,"RigJaw1",1,"RigTongue1",1,"RigTongue2",1,"RigTongue3",1,"RigLEar1",1,"RigREar1",1,"RigLEyelid",1,"RigREyelid",1,"RigLEye1",1,"RigREye1",1};
        UpperBodyTail[] ={"RigLFLegCollarbone",1,"RigNeck1",1,"RigNeck2",1,"RigNeck3",1,"RigNeck4",1,"RigHead",1,"RigJaw1",1,"RigTongue1",1,"RigTongue2",1,"RigTongue3",1,"RigTail1",1,"RigTail2",1,"RigTail3",1,"RigTail4",1,"RigTail5",1,"RigTail6",1,"RigLEar1",1,"RigREar1",1,"RigLEyelid",1,"RigREyelid",1,"RigLEye1",1,"RigREye1",1};
    };

    class States
    {
        class MFR_Base_Anim: DogDefault
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
            file = "\MFR_Dogs\anims\StandIdle.rtm";
            forceAim = 1;
            headBobMode = 5;
            head="headNo";
            headBobStrength = 0;
            interpolateFrom[] = {};
            interpolateTo[] = {};
            interpolateWith[] = {};
            interpolationRestart = 0;
            interpolationSpeed = 6;
            looped = 0;
            mask = "UpperBody";
            minPlayTime = 2;
            preload = 0;
            ragdoll = 0;
            relSpeedMax = 1;
            relSpeedMin = 1;
            showHandGun = 0;
            showItemInHand = 0;
            showItemInRightHand = 0;
            showWeaponAim = 0;
            soundEdge[] = {0.5,1};
            soundEnabled = 0;
            soundOverride = "";
            speed = -2;
            static = 0;
            terminal = 0;
            Walkcycles = 1;
            weaponIK = 0;
            leftHandIKBeg = 0;
            leftHandIKCurve[] = {};
            leftHandIKEnd = 0;
            rightHandIKBeg = 0;
            rightHandIKCurve[] = {};
            rightHandIKEnd = 0;
        };
        class Dog_Stand: MFR_Base_Anim
        {
            file = "\MFR_Dogs\anims\StandIdle.rtm";
            actions = "NoActions";
            speed = -17;
            looped = 0;
            preload = 0;
            interpolationSpeed = 150;
            mask = "UpperBody";
            interpolateTo[] = {"Dog_Bark_01",0.02};
            interpolateFrom[] = {};
            leftHandIKCurve[] = {};
            rightHandIKCurve[] = {};
        };
        class Dog_Bark_01: MFR_Base_Anim
        {
            file = "\MFR_Dogs\anims\Aggresive.rtm";
            actions = "NoActions";
            speed = -4;
            looped = 0;
            preload = 0;
            minPlayTime = 6;
            interpolateWith[] = {"Dog_Stand",1};
            interpolationRestart = 2;
            interpolationSpeed = 500;
            interpolateTo[] = {"Dog_Stand",1};
            interpolateFrom[] = {"Dog_Stand",1};
            mask = "UpperBody";
            leftHandIKCurve[] = {};
            rightHandIKCurve[] = {};
        };
        class Dog_Bite_01: MFR_Base_Anim
        {
            file = "\MFR_Dogs\anims\BiteHigh.rtm";
            actions = "NoActions";
            speed = -1;
            looped = 0;
            preload = 0;
            interpolateTo[] = {"Dog_Bark_01",0.02};
            interpolateFrom[] = {"Dog_Bark_01",0.02};
            mask = "UpperBody";
            leftHandIKCurve[] = {};
            rightHandIKCurve[] = {};
        };
    };

    class Interpolations{};
    transitionsInterpolated[] = {};
    transitionsSimple[] = {};
    transitionsDisabled[] = {};
};
