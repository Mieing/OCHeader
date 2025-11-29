@class NSString;

@interface AWESettingFeedRecommendAlertManager : NSObject <AWEAlertProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (BOOL)shouldCancelAllOtherPendingAlertsWhenShowed;
- (void)onPersonalRecommendChanged:(id)a0;
- (id)init;
- (void)setupNotifications;

@end
