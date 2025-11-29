@class DYABindMobileAlertModel, NSString;

@interface AWEGuideBindMobileManager : NSObject <AWEGuideBindMobileManagerProtocol>

@property (nonatomic, getter=isShowing) BOOL showing;
@property (nonatomic) double lastGuideTimeInterval;
@property BOOL hasShown;
@property (retain) DYABindMobileAlertModel *alertModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)shouldShowAlert;
- (void)observeNotifications;
- (void)showAuthorizeAlertOnFeedIfNeeded;
- (void)checkBindAlertOnFeed;
- (long long)alertTypeFromSetting;
- (long long)alertIntervalFromSetting;
- (long long)bindGuideType;
- (double)bindGuideInterval;
- (BOOL)shouldWaitOtherNotification;
- (id)guideBindMobileAlertSetting;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)showAlert;

@end
