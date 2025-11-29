@interface VmsdkMonitor : NSObject

+ (id)getMonitor;
+ (id)sharedMonitorInfo:(id)a0;
+ (void)monitorEventStatic:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)sharedOnlyAppID;

- (void)monitorEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;

@end
