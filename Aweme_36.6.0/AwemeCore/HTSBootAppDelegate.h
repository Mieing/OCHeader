@class NSString, UIWindow;

@interface HTSBootAppDelegate : NSObject <UIApplicationDelegate>

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) unsigned long long supportOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)awe_setupRotateControlHooks;

- (BOOL)isBackgroundFetchLaunch;
- (BOOL)enableAsyncBootTaskSpread;
- (BOOL)enableRunLaunchCompletionFirst;
- (long long)markLaunchCompletionType;
- (BOOL)forceRunLaunchCompletionBeforeFeedReady;
- (BOOL)isTaskSpreadExecutor;
- (id)currentBootConfig;
- (id)bootConfigInterceptor;
- (BOOL)isSystemBackgroundLaunch;
- (BOOL)isTaskSpreadExecutorForQueue;
- (void)runTaskSpreadExecutorForKey:(const char *)a0 withBlock:(id /* block */)a1;
- (BOOL)downgradeBootTaskAsyncPriority;
- (BOOL)delayLaunchCompletionTaskUntilFeedReady;
- (BOOL)enableBootConfigInterceptorOpt;
- (BOOL)enableFilterEnterForeGroundWhenBGFetchLaunch;
- (id)appEventPlugin;
- (unsigned long long)awe_padUIAdaptionApplication:(id)a0 supportedInterfaceOrientationsForWindow:(id)a1;
- (void)onAppHandleNotificationWithContext:(id)a0;
- (BOOL)useRunloopBlockAsLaunchEnd;
- (void)_observerRunloopFree:(id /* block */)a0;
- (BOOL)autoMarkLuanchCompletion;
- (BOOL)runOneBootTaskPerRunloop;
- (BOOL)isUseFeedCache;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void).cxx_destruct;
- (void)application:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)application:(id)a0 handleEventsForBackgroundURLSession:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (unsigned long long)application:(id)a0 supportedInterfaceOrientationsForWindow:(id)a1;
- (void)application:(id)a0 didReceiveRemoteNotification:(id)a1 fetchCompletionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (void)application:(id)a0 performFetchWithCompletionHandler:(id /* block */)a1;
- (void)application:(id)a0 didReceiveLocalNotification:(id)a1;
- (void)application:(id)a0 didRegisterUserNotificationSettings:(id)a1;
- (void)application:(id)a0 didRegisterForRemoteNotificationsWithDeviceToken:(id)a1;
- (void)application:(id)a0 didFailToRegisterForRemoteNotificationsWithError:(id)a1;
- (id)application:(id)a0 handlerForIntent:(id)a1;

@end
