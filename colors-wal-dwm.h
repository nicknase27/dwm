static const char norm_fg[] = "#ddd7d6";
static const char norm_bg[] = "#0d0d12";
static const char norm_border[] = "#9a9695";

static const char sel_fg[] = "#ddd7d6";
static const char sel_bg[] = "#74718B";
static const char sel_border[] = "#ddd7d6";

// static const char urg_fg[] = "#ddd7d6";
// static const char urg_bg[] = "#655D82";
// static const char urg_border[] = "#655D82";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    // [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
