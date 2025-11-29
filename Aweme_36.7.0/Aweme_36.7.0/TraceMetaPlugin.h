@class TraceMetaPluginConfig, TraceMeta;

@interface TraceMetaPlugin : NSObject {
    TraceMetaPluginConfig *_config;
    TraceMeta *_tracemeta;
}

+ (id)name;
+ (id)shared;

- (void)updateConfig:(id)a0;
- (BOOL)isProfiler;
- (void)dump;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)destroy;
- (void)start;

@end
