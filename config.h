static int topbar                           = 1;
static int fuzzy                            = 1;
static int centered                         = 0;            // -c
static int min_width                        = 400;
static const char *prompt                   = "";           // -p

static const char *fonts[]                  = { "SF Mono Nerd Font:size=10:style=medium" };

static const char *colors[SchemeLast][2]    = {
	//                           fg         bg
	[SchemeNorm]            = { "#F8B017", "#001110" },
	[SchemeSel]             = { "#001110", "#F8B017" },
	[SchemeSelHighlight]    = { "#E71949", "#F8B017" },
	[SchemeNormHighlight]   = { "#E01DCA", "#001110" },
	[SchemeOut]             = { "#000000", "#00FFFF" },
	[SchemeHp]              = { "#BBBBBB", "#333333" },
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

