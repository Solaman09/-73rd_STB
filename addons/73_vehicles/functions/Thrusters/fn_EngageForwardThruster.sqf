/*
	Author: Fireteam Zulu (Vespade) modified by 105th | S-4 Logistics (Luke) further adapted for 73rd STB S-4 mod Team
	
	Description:
	Enable forward thrusters on selected vehicle
	
	Parameter(s):
	_this select 0: OBJECT - vehicle to enable afterburners for
	
	Returns:
	NONE
*/

params ["_vehicle", ["_silent", false]];

if (!(_vehicle getVariable "STB73_Thrusters_Usable")) exitWith {};

if (!(_silent)) then {
	hint "ENGAGING FORWARD THRUSTERS";
};

private _hullDamage = _vehicle getHitPointDamage "hithull";
if (_hullDamage > 0.75) exitWith {
	if (!(_silent)) then {
		hint "CANNOT ENGAGE AFTERBURNERS, TOO DAMAGED";
	};
};

_vehicle setVariable ["STB73_Airbrakes_Active", false];
_vehicle setVariable ["STB73_Thrusters_Engaged", true];

if (_vehicle getVariable ["STB73_AnimateThrusters", false]) then {
	_vehicle spawn STB73_fnc_ThrusterAnimate;
};

if (!(isNil "STB73_ThrustersEH")) then {
	removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
	STB73_ThrustersEH = nil;
};

STB73_ThrustersEH = addMissionEventHandler ["EachFrame", {
	if (diag_frameNo % 2 == 0) exitWith {}; // Every other Frame
	private _vehicle = (_thisArgs#0);
	private _hullDamage = _vehicle getHitPointDamage "hithull";
	if (_hullDamage > 0.75) exitWith {
		removeMissionEventHandler ["EachFrame", STB73_ThrustersEH];
		_vehicle setVariable ["STB73_Thrusters_Engaged", false];
		hint "DISENGAGING FORWARD THRUSTERS, DUE TO DAMAGE";
	};
	if (speed _vehicle <= 350) then {
		private _speed = (STB73_ThrusterMultiplier/diag_fps);
		[_vehicle, _speed] call STB73_fnc_ChangeSpeed;
	};
}, [_vehicle]];