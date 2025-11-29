@interface AppMonitor : NSObject

+ (BOOL)isInit;
+ (void)setSampling:(id)a0;
+ (void)setUTInit;
+ (void)turnOnAppMonitorRealtimeDebug:(id)a0;
+ (void)turnOffAppMonitorRealtimeDebug;
+ (id)realTimeDebugUploadUrl;
+ (id)realTimeDebugId;
+ (void)setSamplingConfigWithJson:(id)a0;
+ (BOOL)isUTInit;
+ (BOOL)isTurnOnRealTimeDebug;
+ (void)disableSample;
+ (id)sharedInstance;

- (id)init;
- (void)appDidEnterBackground;

@end
