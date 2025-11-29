@interface TraceMetaProfilerConfig : TraceMetaPluginConfig {
    BOOL _merge_stack;
    BOOL _main_only;
    BOOL _active_only;
    BOOL _fast_unwind;
    long long _period;
    long long _bg_period;
}

+ (id)defaultConfig;

- (id)initWithDictionary:(id)a0;

@end
