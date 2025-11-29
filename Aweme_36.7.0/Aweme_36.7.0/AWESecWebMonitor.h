@interface AWESecWebMonitor : NSObject

+ (void)triggerMonitorAction:(id)a0 catergory:(id)a1 onContainer:(id)a2;
+ (void)triggerMonitorAction:(id)a0 catergory:(id)a1 onContainer:(id)a2 withDelay:(double)a3;
+ (void)triggerMonitorAction:(id)a0 catergory:(id)a1 metric:(id)a2 onContainer:(id)a3;
+ (void)triggerMonitorAction:(id)a0 catergory:(id)a1 metric:(id)a2 onContainer:(id)a3 withDelay:(double)a4;
+ (void)_internalTriggerMonitorAction:(id)a0 catergory:(id)a1 metric:(id)a2 onContainer:(id)a3;
+ (void)onJSBInvoke:(id)a0;
+ (void)ats_preload;
+ (void)ats_onJSBInvoke:(id)a0;
+ (void)addCallInfo:(id)a0;
+ (id)getCallInfos;
+ (void)setup;

@end
