@class NSString, NSMutableArray;

@interface AFDFriendsTabAlertManager : NSObject <AFDFriendsTabAlertManagerProtocol>

@property (retain, nonatomic) NSMutableArray *alertsRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)triggerEnterFriendsTabEvent;
- (void)p_setupAlertsRegistry;
- (void)addColdLaunchSplashDisappearAlerts;
- (id)p_registerAlert:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
