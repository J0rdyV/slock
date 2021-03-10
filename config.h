/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char * message = "Be Mindful     ";
static const char *text_color = "#ebdbb2";
static const char *font_name = "-microsoft-cascadia code pl-medium-r-normal--0-0-0-0-m-0-iso8859-15";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#458488",   /* during input */
	[FAILED] = "#cc241d",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
/* #define BLUR */
/*Set blur radius*/
/* static const int blurRadius=10; */

/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=5;


