@interface TraceMetaLockProfilerConfig : TraceMetaPluginConfig {
    BOOL _mtx;
    BOOL _rw;
    BOOL _cond;
    BOOL _unfair;
    long long _period;
    long long _bg_period;
}

+ (id)defaultConfig;

- (id)initWithDictionary:(id)a0;

@end
