@interface AWELuckySDKPopupManager : NSObject

@property (nonatomic) BOOL hasPrivacyAlertShown;

+ (id)sharedManager;

- (BOOL)canShowForNewAlertManager;
- (BOOL)__checkPrivacyAlertAlreadyShow;
- (void)__trackSlardarServiceWithEvent:(id)a0 category:(id)a1;
- (BOOL)isActivityPopupNeededShow;
- (BOOL)hasTeenAlertDone;
- (BOOL)isActivityPopupInSpecialPage;
- (BOOL)isAppInAuditing;
- (BOOL)shouldShowBindPhoneAlert;

@end
