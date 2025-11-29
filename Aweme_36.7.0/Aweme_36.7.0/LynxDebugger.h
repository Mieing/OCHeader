@interface LynxDebugger : NSObject

+ (Class)bridgeClass;
+ (BOOL)enable:(id)a0 withOptions:(id)a1;
+ (void)addOpenCardCallback:(id /* block */)a0;
+ (void)setOpenCardCallback:(id /* block */)a0;
+ (BOOL)hasSetOpenCardCallback;
+ (void)onPerfMetricsEvent:(id)a0 withData:(id)a1 instanceId:(int)a2;
+ (BOOL)openDebugSettingPanel;

@end
