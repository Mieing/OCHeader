@interface TraceMetaIOProfilerConfig : TraceMetaPluginConfig {
    long long _period;
    long long _bg_period;
    long long _size_thres;
}

+ (id)defaultConfig;

- (id)initWithDictionary:(id)a0;

@end
