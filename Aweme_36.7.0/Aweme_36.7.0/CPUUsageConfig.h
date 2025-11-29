@interface CPUUsageConfig : TraceMetaPluginConfig {
    BOOL _single_thread;
    unsigned int _period;
    unsigned int _window;
    float _threshold;
}

- (id)initWithDictionary:(id)a0;

@end
