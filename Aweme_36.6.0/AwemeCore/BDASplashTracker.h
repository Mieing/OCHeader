@interface BDASplashTracker : NSObject

+ (void)trackNoAdEvent:(id)a0 params:(id)a1;
+ (void)trackMonitorService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (void)trackALogWithInfoLevel:(id)a0;
+ (void)trackEventWithLabel:(id)a0 extra:(id)a1 adExtraData:(id)a2;
+ (void)trackEventWithLabel:(id)a0 model:(id)a1 extra:(id)a2 adExtraData:(id)a3;
+ (void)trackEventWithTag:(id)a0 Label:(id)a1 adId:(id)a2 logExtra:(id)a3 extra:(id)a4 adExtraData:(id)a5;
+ (void)trackALogWithLevel:(int)a0 log:(id)a1;
+ (void)trackALogWithWarnLevel:(id)a0;
+ (void)trackALogWithErrorLevel:(id)a0;
+ (id)monitor;

@end
