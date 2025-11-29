@interface TraceMetaMemProfilerPlugin : TraceMetaPlugin {
    BOOL _running;
}

+ (id)name;
+ (id)shared;

- (BOOL)isProfiler;
- (void)dump;
- (id)init;
- (void)stop;
- (void)start;

@end
