@interface TraceMetaMonitorPlugin : TraceMetaPlugin

+ (id)name;
+ (id)shared;

- (id)init;
- (void)stop;
- (void)start;

@end
