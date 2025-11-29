@interface TraceMetaMemProfilerConfig : TraceMetaPluginConfig {
    BOOL _lite_mode;
    unsigned int _interval;
    int _force_profile_threshold;
    long long _period;
    long long _bg_period;
}

+ (id)defaultConfig;

- (id)initWithDictionary:(id)a0;

@end
