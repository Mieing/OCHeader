@class NSString, NSPointerArray;

@interface FlutterPluginAppLifeCycleDelegate : NSObject <UNUserNotificationCenterDelegate> {
    unsigned long long _debugBackgroundTask;
    NSPointerArray *_delegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserverFor:(id)a0 selector:(SEL)a1;
- (id)init;
- (BOOL)isSelectorAddedDynamically:(SEL)a0;
- (BOOL)hasPluginThatRespondsToSelector:(SEL)a0;
- (void)addDelegate:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (void)handleDidEnterBackground:(id)a0;
- (void)handleWillEnterForeground:(id)a0;
- (void)handleWillResignActive:(id)a0;
- (void)handleDidBecomeActive:(id)a0;
- (void)handleWillTerminate:(id)a0;
- (void)application:(id)a0 didRegisterUserNotificationSettings:(id)a1;
- (void)application:(id)a0 didRegisterForRemoteNotificationsWithDeviceToken:(id)a1;
- (void)application:(id)a0 didFailToRegisterForRemoteNotificationsWithError:(id)a1;
- (void)application:(id)a0 didReceiveRemoteNotification:(id)a1 fetchCompletionHandler:(id /* block */)a2;
- (void)application:(id)a0 didReceiveLocalNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (BOOL)application:(id)a0 handleOpenURL:(id)a1;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (void)application:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 handleEventsForBackgroundURLSession:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 performFetchWithCompletionHandler:(id /* block */)a1;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
