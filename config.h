/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar   = 1;                    /* -b  option; if 0, dmenu appears at bottom */
static int fuzzy    = 1;                    /* -F  option; if 0, dmenu doesn't use fuzzy matching */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Fira Code Regular:fontformat=true:pixelsize=11:antialias=true;3",
	"monospace:size=11;3",
    "unifont:fontformat=true:size=11:antialias=false;0",
    "siji:pixelsize=11;3",
    "Font Awesome 5 Free:fontformat=true:pixelsize=10:antialias=true:style=solid;3",
    "Font Awesome 5 Brands:fontformat=true:pixelsize=10:antialias=true:style=solid;3",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* Dracula */
static const char col_black[]       = "#292d3e";
static const char col_red[]         = "#f07178";
static const char col_green[]       = "#c3e88d";
static const char col_yellow[]      = "#ffcb6b";
static const char col_blue[]        = "#89aaff";
static const char col_purple[]      = "#c792ea";
static const char col_cyan[]        = "#89ddff";
static const char col_white[]       = "#d0d0d0";
static const char col_lblack[]      = "#434758";
static const char col_lred[]        = "#ff8b92";
static const char col_lgreen[]      = "#ddffa7";
static const char col_lyellow[]     = "#ffe585";
static const char col_lblue[]       = "#9cc4ff";
static const char col_lpurple[]     = "#e1acff";
static const char col_lcyan[]       = "#a3f7ff";
static const char col_lwhite[]      = "#ffffff";

/* Colors */
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
//static const char col_cyan[]        = "#005577";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_white, col_black },
	[SchemeSel] = { col_lpurple, col_lblack },
	[SchemeOut] = { col_black, col_cyan },
    [SchemeSelHighlight] = { col_lyellow, col_lblack },
    [SchemeNormHighlight] = { col_yellow, col_black },
    [SchemeHp] = { col_black, col_purple },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 11;         /* -h option; minimum height of a menu line */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
