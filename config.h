/* user and group to drop privileges to */
static const char *user  = "gatonegro";
static const char *group = "gatonegro"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#0a0a20",     /* after initialization */
	[INPUT] =  "#363649",   /* during input */
	[FAILED] = "#bb00ff",   /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.9;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
