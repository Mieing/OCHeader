@interface IESECFullTradeProcessMonitor : NSObject

+ (void)trackEvent:(id)a0 params:(id)a1;
+ (BOOL)alogSwitch;
+ (id)formatEventWithEventType:(long long)a0 pageName:(id)a1 action:(id)a2;
+ (id)alogTagWithPageName:(id)a0;
+ (void)hmdTrackEvent:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (BOOL)isSamplingWithType:(long long)a0;
+ (void)monitorErrorWithPage:(id)a0 action:(id)a1 code:(id)a2 category:(id)a3 extra:(id)a4;
+ (void)monitorDurationWithPage:(id)a0 action:(id)a1 duration:(long long)a2 category:(id)a3 extra:(id)a4;
+ (void)monitorRateStartWithPage:(id)a0 action:(id)a1 category:(id)a2;
+ (void)monitorRateEndWithPage:(id)a0 action:(id)a1 success:(BOOL)a2 code:(id)a3 category:(id)a4 message:(id)a5;

@end
