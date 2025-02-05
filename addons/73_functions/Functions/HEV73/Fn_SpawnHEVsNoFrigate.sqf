/*
	-

	Description:

	Author: Big_Wilk

	Return: none

	Prams:
	0:
	1:

*/

private ["_units","_startHeight"];

_units = _this select 0;
_startHeight = _this select 1;

_hevArray = [];			// All HEVs created
_hevArrayPlayer = [];	// All HEVs created	for players
_hevArrayAi = [];		// All HEVs created for ai
_listOfPlayers = [];	// All players units
_listOfAi = []; 		// All ai units

{
	if (vehicle _x == _x AND alive _x) then {

		//[999,["OPTRE_LoadScreen", "PLAIN"]] remoteExec ["cutRsc", _x, false];
		//[_x,"INTERNAL"] remoteExec ["switchCamera", _unit, false];

		_unitPos = getPos _x;
		_unitDir = getDir _x;
		_spawnPos = [(_unitPos select 0),(_unitPos select 1),_startHeight];

		_hev = createVehicle ["DMNS_SOEIV", _spawnPos, [], 0, "FLY"];
		_hev setDir _unitDir;
		_hev lock true;
		_hevArray pushBack _hev;

		[_x,_hev] remoteExec ["moveInGunner", _x, false];
		[_x,false] remoteExec ["allowDamage", _x, false];

		if (isPlayer _x) then {
			[_x,"INTERNAL"] remoteExec ["switchCamera", _x, false];
			_listOfPlayers pushBack _x;
			_hevArrayPlayer pushBack _hev;
			_hev setVariable ["DMNS_PlayerControled",true,true];
		} else {
			_listOfAi pushBack _x;
			_hevArrayAi pushBack _hev;
		};

	};

} forEach _units;

[_hevArray,_hevArrayPlayer,_hevArrayAi,_listOfPlayers,_listOfAi]
