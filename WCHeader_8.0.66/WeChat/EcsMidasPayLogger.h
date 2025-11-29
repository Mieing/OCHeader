@interface EcsMidasPayLogger : NSObject <MidasPayKit.MidasPayRuntimeDelegate>

- (void)startLogger;
- (void)logWithLevelName:(id)a0 moduleName:(id)a1 log:(id)a2;

@end
