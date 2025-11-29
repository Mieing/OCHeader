@interface MemorySpikeConfig : TraceMetaPluginConfig {
    unsigned int _period;
    unsigned int _window;
    float _P;
    unsigned long long _threshold;
}

- (id)initWithDictionary:(id)a0;

@end
