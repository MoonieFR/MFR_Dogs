/* Copyright 2021 - Association Projets Edaly. All rights reserved */

//First simple version
(_this#0)# params [
	"_target",
	"_shooter",
	"_projectile",
	"_position",
	"_velocity",
	"_selection",
	"_ammo",
	"_vector",
	"_radius",
	"_surfaceType",
	"_isDirect"
];

if(isNull _target) exitWith { diag_log "Edaly_Tiger : Error, the target doesn't exist."; };
if !(alive _target) exitWith { false };

private _animation = configFile >> "CfgVehicles" >> typeOf _target >> _selection#0;

if !(isText (_animation)) exitWith {
	diag_log format ["Error: Selection %1 in %2 has no source set in selections class", _selection, typeOf(_target)];
	false
};

[_target, (getText (_animation)] remoteExec ["switchMove", 0];
true;
