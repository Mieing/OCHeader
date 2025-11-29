@class TimerConfig, ViewConfig, ViewControllerConfig, AppStateConfig, FirstFrameConfig, LaunchConfig, CellConfig, ScrollConfig, TraceMetaLynxConfig, TraceMetaTrackerConfig;

@interface TraceMetaTimeSeriesConfig : TraceMetaPluginConfig {
    AppStateConfig *_appState;
    CellConfig *_cell;
    ScrollConfig *_scroll;
    TimerConfig *_timer;
    ViewControllerConfig *_vc;
    ViewConfig *_view;
    LaunchConfig *_launch;
    FirstFrameConfig *_firstFrame;
    TraceMetaLynxConfig *_lynx;
    TraceMetaTrackerConfig *_tracker;
}

+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
