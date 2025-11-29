@class NSArray, UIWindow, NSString;
@protocol RxInjector;

@interface RxBaseApplicationDelegate : UIResponder <RxApplicationService, NSFastEnumeration>

@property (copy, nonatomic) NSArray *__applicationServices;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)applicationServices;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)application:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (void)applicationDidFinishLaunching:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (void)applicationDidEnterBackground:(id)a0;
- (BOOL)application:(id)a0 handleOpenURL:(id)a1;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)application:(id)a0 handleEventsForBackgroundURLSession:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 shouldAllowExtensionPointIdentifier:(id)a1;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (void)applicationSignificantTimeChange:(id)a0;
- (void)application:(id)a0 willChangeStatusBarOrientation:(long long)a1 duration:(double)a2;
- (void)application:(id)a0 didChangeStatusBarOrientation:(long long)a1;
- (void)application:(id)a0 willChangeStatusBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)application:(id)a0 didChangeStatusBarFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)application:(id)a0 handleWatchKitExtensionRequest:(id)a1 reply:(id /* block */)a2;
- (BOOL)application:(id)a0 shouldSaveApplicationState:(id)a1;
- (BOOL)application:(id)a0 shouldRestoreApplicationState:(id)a1;
- (void)application:(id)a0 userDidAcceptCloudKitShareWithMetadata:(id)a1;
- (void)application:(id)a0 didFailToContinueUserActivityWithType:(id)a1 error:(id)a2;
- (BOOL)application:(id)a0 willContinueUserActivityWithType:(id)a1;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (void)application:(id)a0 didUpdateUserActivity:(id)a1;
- (void)application:(id)a0 performFetchWithCompletionHandler:(id /* block */)a1;
- (void)application:(id)a0 handleActionWithIdentifier:(id)a1 forRemoteNotification:(id)a2 withResponseInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)application:(id)a0 handleActionWithIdentifier:(id)a1 forRemoteNotification:(id)a2 completionHandler:(id /* block */)a3;
- (void)application:(id)a0 didReceiveLocalNotification:(id)a1;
- (void)application:(id)a0 didReceiveRemoteNotification:(id)a1;
- (void)application:(id)a0 handleActionWithIdentifier:(id)a1 forLocalNotification:(id)a2 withResponseInfo:(id)a3 completionHandler:(id /* block */)a4;
- (void)application:(id)a0 handleActionWithIdentifier:(id)a1 forLocalNotification:(id)a2 completionHandler:(id /* block */)a3;
- (void)applicationShouldRequestHealthAuthorization:(id)a0;
- (void)application:(id)a0 didRegisterUserNotificationSettings:(id)a1;
- (void)application:(id)a0 didRegisterForRemoteNotificationsWithDeviceToken:(id)a1;
- (void)application:(id)a0 didFailToRegisterForRemoteNotificationsWithError:(id)a1;
- (void)application:(id)a0 willEncodeRestorableStateWithCoder:(id)a1;
- (void)applicationProtectedDataWillBecomeUnavailable:(id)a0;
- (void)applicationProtectedDataDidBecomeAvailable:(id)a0;
- (id)application:(id)a0 viewControllerWithRestorationIdentifierPath:(id)a1 coder:(id)a2;
- (void)application:(id)a0 didDecodeRestorableStateWithCoder:(id)a1;

@end
