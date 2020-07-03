# SLSCMD  
**Fastest and easy-to-use command processor for SA-MP, based in CockMmand**  

## Benchmarks
By **kyro#9315**
![cockbench](https://i.imgur.com/zYPzXeQ.png)

## Support
no-reply@sdsls.com

## Usage
Simply, use it like this:
```pawn
#define IS_SAMP_MOBILE false // true if your server is compatible
#include <slscmd>
public OnPlayerCommandText(playerid, cmdtext[])
{
    slscmd("command_name")
    {
         // command code
    }
    return 1;
}
```
To add more than one command, we made simple optimization, use:
```pawn
#define IS_SAMP_MOBILE false // true if your server is compatible
#include <slscmd>
public OnPlayerCommandText(playerid, cmdtext[])
{
    slscmd("command_name")
    {
        // command code
    }
    slscmd_multiple("command_2")
    {
        // code
    }
    slscmd_multiple("command_3")
    {
        // code
    }
    return 1;
}
```
**WARNING! USAGE OUTSIDE OnPlayerCommandText WILL NOT WORK!**

## Installation  
- Download **slscmd.inc** from branch `master`
- Place in `serverroot/pawno/include`. Final path should look like this: `serverroot/pawno/include/slscmd.inc`.
- Profit!  

## Installation 2
`sampctl p install SdSLS/sls-command`
