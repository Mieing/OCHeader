@interface BDUGPushEventManager : NSObject

+ (void)trackPushClearEventWithClearType:(long long)a0 notification:(id)a1;
+ (void)trackPushClearEventWithClearType:(long long)a0 params:(id)a1;
+ (id)_getEventParamsWithUserInfo:(id)a0;
+ (id)_getPushClearType:(long long)a0;
+ (void)trackEvent:(id)a0 userInfo:(id)a1;
+ (void)trackPushClickEventWithResponse:(id)a0;

@end
