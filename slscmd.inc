#if defined _inc_slscmd
	#endinput
#endif
#define _inc_slscmd

#define SLSCMD_VERSION	"1.0"

#if !defined SLS_CASE_SENSITIVE
	#define SLS_CASE_SENSITIVE true
#endif

#if !defined IS_SAMP_MOBILE
	#error You must define IS_SAMP_MOBILE with true or false before including SLSCMD.
#endif

#if !IS_SAMP_MOBILE
	#define slscmd(%0) if(!strcmp(%0, cmdtext, SLS_CASE_SENSITIVE))
	#define slscmd_multiple(%0) else if(!strcmp(%0, cmdtext, SLS_CASE_SENSITIVE))

	stock GetSLSCMDVersion()
	{
		return SLSCMD_VERSION;
	}
#else
	#warning dont use samp mobile.
	
	#if defined FILTERSCRIPT
		public OnFilterScriptInit()
	#else
		public OnGameModeInit()
	#endif
		{
			print("slscmd no compatible with samp mobile");
			SendRconCommand("exit");
			
			#if defined FILTERSCRIPT
				#if defined SLS_OnFilterScriptInit
					return SLS_OnFilterScriptInit();
				#else
					return 1;
				#endif
			#else
				#if defined SLS_OnGameModeInit
					return SLS_OnGameModeInit();
				#else
					return 1;
				#endif
			#endif
		}
	
	#if defined FILTERSCRIPT
		#if defined _ALS_OnFilterScriptInit
			#undef OnFilterScriptInit
		#else
			#define _ALS_OnFilterScriptInit
		#endif
		#define OnFilterScriptInit SLS_OnFilterScriptInit
		#if defined SLS_OnFilterScriptInit
			forward SLS_OnFilterScriptInit();
		#endif
	#else
		#if defined _ALS_OnGameModeInit
			#undef OnGameModeInit
		#else
			#define _ALS_OnGameModeInit
		#endif
		#define OnGameModeInit SLS_OnGameModeInit
		#if defined SLS_OnGameModeInit
			forward SLS_OnGameModeInit();
		#endif
	#endif
	
	#define slscmd(%0) if(!strcmp(%0, cmdtext, SLS_CASE_SENSITIVE))
	#define slscmd_multiple(%0) else if(!strcmp(%0, cmdtext, SLS_CASE_SENSITIVE))

	stock GetSLSCMDVersion()
	{
		return COCKMMAND_VERSION;
	}
#endif
