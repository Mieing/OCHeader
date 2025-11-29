@class NSString;

@interface AWEAlertConfigService : HTSService <AWEAlertInterceptorDelegate, AWEUserMessage, AWEAlertManagerDelegate, HTSAppLifeCycle, AWEAlertConfigService>

@property (nonatomic) double foregroundLaunchTS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkConfig;
+ (id)interceptorRegistry;
+ (id)shared;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didFinishLoginWithUid:(id)a0;
- (void)onAppDidBecomeActive;
- (void)addNotification;
- (void)viewControllerTransitionNotification:(id)a0;
- (void)interceptorActionBeforeTriggerEventWithEvent:(id)a0;
- (void)checkConfig;
- (BOOL)popCloseCheckTransitionEnable;
- (void)tabDidChange:(id)a0;
- (void)trackEarlyEventIfNeeded:(id)a0;
- (void)addLynxPopupIfNeeded:(id)a0 forEvent:(id)a1;
- (BOOL)enableTrackEarlyEvent;
- (id)earlyEventWhitelist;
- (id)objectFromSettingsForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (void)dealloc;
- (void)handleDidBecomeActive;
- (void)setup;

@end
