//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
  /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "dwmblocks-volume", 600, 10},
  {"GPU:", "dwmblocks-stats-gpu", 2, 0},
  {"CPU:", "dwmblocks-stats-cpu", 2, 0},
  {"RAM:", "free -m | awk '/^Mem/ { print $7\"/\"$2 }' | sed s/i//g",	5, 0},
  {"SWAP:", "free -m | awk '/^Swap/ { print $3 }' | sed s/i//g",	5, 0},
  {"", "date '+%b %d (%a) %H:%M%p'", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
