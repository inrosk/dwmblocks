//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		 /*Interval*/	  /*Signal*/
	{"",      "bar-volume",                  600, 1},
	{"GPU:",  "bar-stats-gpu",               2,   0},
	{"CPU:",  "bar-stats-cpu",               2,   0},
	{"RAM:",  "bar-stats-ram",               5,   0},
	{"SWAP:", "bar-stats-swap",              5,   0},
	{"",      "bar-date",                    5,   0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
