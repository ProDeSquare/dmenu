/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 760;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Jetbrains Mono:size=10"
};
static const char *prompt      = "";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#E6C176", "#282C34" },
	[SchemeSel] = { "#282C34", "#E6C176" },
	[SchemeSelHighlight] = { "#C84B4A", "#E6C176" },
	[SchemeNormHighlight] = { "#B771CD", "#282C34" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeHp] = { "#bbbbbb", "#333333" }
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int lineheight = 28;         /* -h option; minimum height of a menu line     */
static unsigned int columns    = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 0;
