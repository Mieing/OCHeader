@interface BDLynxSecurityMonitor : NSObject

+ (id)paramsFromMessage:(unsigned long long)a0 data:(id)a1 WithContext:(id)a2 configKey:(id)a3;
+ (id)checkParamReport:(unsigned long long)a0 bridgeContext:(id)a1 configKey:(id)a2;
+ (void)triggerMonitorByReceiveMessage:(id)a0 onLynxContainer:(id)a1 blocked:(BOOL)a2;
+ (void)triggerMonitorBySendMessage:(id)a0 onLynxContainer:(id)a1 blocked:(BOOL)a2;
+ (void)triggerMonitorByContext:(id)a0 onLynxContainer:(id)a1 blocked:(BOOL)a2;

@end
