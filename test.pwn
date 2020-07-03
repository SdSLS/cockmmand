#include <a_samp>

#define IS_SAMP_MOBILE false
#define SLS_CASE_SENSITIVE true
#include "slscmd.inc"

public OnPlayerCommandText(playerid, cmdtext[])
{
	slscmd("yadayada")
	{
		SendClientMessage(playerid, -1, "POU!");
		return 1;
	}
	slscmd_multiple("lul")
	{
		SendClientMessage(playerid, -1, "Hi!");
		return 1;
	}
	
	return 0;
}
