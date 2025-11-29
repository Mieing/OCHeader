@interface BDLynxJSBMonitor : BDHybridBaseMonitor

+ (BOOL)startMonitorWithSetting:(id)a0;
+ (void)reportJSBErrorInLynxView:(id)a0 withModel:(id)a1;
+ (void)reportJSBFetchErrorInLynxView:(id)a0 withModel:(id)a1;
+ (void)reportJSBPerfInLynxView:(id)a0 withModel:(id)a1;
+ (void)reportJSBPerfV2InLynxView:(id)a0 withInfos:(id)a1;

@end
