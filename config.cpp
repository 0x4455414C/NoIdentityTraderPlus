////////////////////////////////////////////////////////////////////
//DeRap: NoIdentityAI\config.bin
//Produced from mikero's Dos Tools Dll version 7.97
//https://mikero.bytex.digital/Downloads
//'now' is Tue Mar 01 22:59:12 2022 : 'file' last modified on Fri Jun 11 02:14:48 2021
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class NoIdentityTraderPLus
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMods
{
	class NoIdentityTraderPlus
	{
		dir = "NoIdentityTraderPlus";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "NoIdentityTraderPlus";
		credits = "DUAL";
		author = "DUAL";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"NoIdentityTraderPlus\4_World"};
			};
		};
	};
};
