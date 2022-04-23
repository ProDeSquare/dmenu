static int topbar                           = 1;
static int fuzzy                            = 1;
static int centered                         = 0;            // -c
static int min_width                        = 400;
static const char *prompt                   = "";           // -p

static const char *fonts[]                  = { "SF Mono Nerd Font:size=10:style=medium" };

static const char *colors[SchemeLast][2]    = {
	//                           fg         bg
	[SchemeNorm]            = { "#E6C176", "#1c2023" },
	[SchemeSel]             = { "#1c2023", "#E6C176" },
	[SchemeSelHighlight]    = { "#C84B4A", "#E6C176" },
	[SchemeNormHighlight]   = { "#B771CD", "#1c2023" },
	[SchemeOut]             = { "#000000", "#00ffff" },
	[SchemeHp]              = { "#bbbbbb", "#333333" },
};

// -l and -g options; controls number of lines and columns in grid if > 0
static unsigned int lines                   = 0;
static unsigned int lineheight              = 32;
static unsigned int columns                 = 0;

// Characters not considered part of a word while deleting words
// for example: " /?\"&[]"
static const char worddelimiters[]          = " ";

// Size of the window border
static const unsigned int border_width      = 2;

