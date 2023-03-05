/* user and group to drop privileges to */
static const char *user  = "gatonegro";
static const char *group = "gatonegro"; // use "nobody" for arch

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#0a0a20",     /* after initialization */
	[INPUT] =  "#363649",   /* during input */
	[FAILED] = "#bb00ff",   /* wrong password */
};

/* default message */
static const char * message = "gatoneg.ro";

/* text color */
static const char * text_color = "#c1c1d1";

/* text size (must be a valid size) */
static const char * font_name = "-misc-roboto mono-bold-r-normal--0-0-0-0-m-0-iso8859-16";

/* lock screen opacity */
static const float alpha = 0.9;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
