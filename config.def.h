/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};





/* lock screen opacity */
static const float alpha = 0.9;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;





/* allow control key to trigger fail on clear */
static const int controlkeyclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;



