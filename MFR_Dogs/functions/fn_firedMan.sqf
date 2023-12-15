/* Copyright 2021 - Association Projets Edaly. All rights reserved */

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_vehicle"];

if (local _unit) then {
    private _area = _unit modelToWorld [0, 2, 0];

    {
        if (_x isKindOf "Man") then {
            for "_i" from 0 to (round(random(4)) max 1) do {
                private _hit = configName (selectRandom ("(configName _x) isNotEqualTo 'Incapacitated'" configClasses (configFile >> "CfgVehicles" >> (typeOf _x) >> "HitPoints")));

                [_x, [_hit, ((_x getHitPointDamage _hit) + ((random 1) max 0.1)) min 1]] remoteExecCall ["setHitPointDamage", _x];
            };
        } else {
            [_x, ["HitHull", ((_x getHitPointDamage "HitHull") + 0.1) min 1]] remoteExecCall ["setHitPointDamage", _x];
        };
    } forEach ((_area nearEntities 1.5) - [_unit]);
};

_unit switchMove (selectRandom ["AttackHigh", "AttackHigh", "AttackHigh"]);
