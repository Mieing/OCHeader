@interface TraceMetaDateProfilerConfig : TraceMetaPluginConfig {
    long long _period;
    long long _bg_period;
}

+ (id)defaultConfig;

- (id)initWithDictionary:(id)a0;

@end
