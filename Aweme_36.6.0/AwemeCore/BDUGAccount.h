@interface BDUGAccount : NSObject

@property (nonatomic) BOOL isLoginInOtherApps;

+ (id)sharedInstance;

- (void)accountDidLoginNotification;
- (void)accountDidLogoutNotification;
- (void)accountSessionExpiredNotification;
- (void)bindPhoneNotification;
- (void)rebindPhoneNotification;

@end
