@interface HighFreqAllocConfig : TraceMetaPluginConfig {
    unsigned int _period;
    unsigned int _window;
    float _P;
    long long _threshold;
}

- (id)initWithDictionary:(id)a0;

@end
