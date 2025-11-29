@interface TraceMetaLockProfilerPlugin : TraceMetaPlugin {
    int _process_id;
}

+ (id)name;
+ (id)shared;

- (BOOL)isProfiler;
- (void)dump;
- (id)init;
- (void)stop;
- (void)start;

@end
