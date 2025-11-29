@interface TimerConfig : TraceMetaPluginConfig {
    BOOL _link;
    BOOL _nstimer;
    BOOL _dispatch;
    double _interval;
}

- (id)initWithDictionary:(id)a0;

@end
