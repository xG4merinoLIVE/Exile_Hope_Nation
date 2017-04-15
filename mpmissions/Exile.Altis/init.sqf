//[] execVM "scarCODE\ServerInfoMenu\sqf\initLocal.sqf";										//		scarCODE ServerInfoMenu
[] execVM "custom\WelcomeRespectIntro\Intro_Text.sqf";											//		Willkommens Nachrichten & ein IntroSong
//[] execVM "custom\Jump_Script\jumping.sqf";													//		Sprungscript

if hasInterface then
{
	[] execVM "addons\VEMFr_client\sqf\initClient.sqf";											// Client-side part of VEMFr
};

if (isServer) then {
     //fn_crashdrop = compile preprocessFile "custom\Heli_Crash_und_Drop\crashdrop.sqf";		//ETG Heli Crash And Drop Script
     //[2] call fn_crashdrop;																	//ETG Heli Crash And Drop Script
};