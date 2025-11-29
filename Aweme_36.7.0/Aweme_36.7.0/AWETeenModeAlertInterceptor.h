@class NSString;

@interface AWETeenModeAlertInterceptor : NSObject <AWEAlertInterceptorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInterceptor;

- (BOOL)interceptorActionBeforeShowWithContext:(id)a0;
- (id)p_settingsConfig;
- (id)p_alertManagerWhiteList;
- (id)p_alertManagerBlackList;
- (void)slardarEventReportOfService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;

@end
