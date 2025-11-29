@class NSString;

@interface BDUGUserNotificationCenter : NSObject <UNUserNotificationCenterDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)requestDeviceToken;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 openSettingsForNotification:(id)a1;
- (void)registerForRemoteNotifications;
- (void)requestAuthorization;

@end
