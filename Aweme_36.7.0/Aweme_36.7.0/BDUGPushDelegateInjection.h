@interface BDUGPushDelegateInjection : NSObject

- (void)application:(id)a0 didReceiveRemoteNotification:(id)a1 fetchCompletionHandler:(id /* block */)a2;
- (void)application:(id)a0 handleActionWithIdentifier:(id)a1 forRemoteNotification:(id)a2 withResponseInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)application:(id)a0 handleActionWithIdentifier:(id)a1 forRemoteNotification:(id)a2 completionHandler:(id /* block */)a3;
- (void)application:(id)a0 didReceiveLocalNotification:(id)a1;
- (void)application:(id)a0 handleActionWithIdentifier:(id)a1 forLocalNotification:(id)a2 withResponseInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)application:(id)a0 didRegisterUserNotificationSettings:(id)a1;
- (void)application:(id)a0 didRegisterForRemoteNotificationsWithDeviceToken:(id)a1;
- (void)application:(id)a0 didFailToRegisterForRemoteNotificationsWithError:(id)a1;

@end
