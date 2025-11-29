@class AWEUITaskDelaySpreadExecutor, UIWindow, NSString;

@interface AppDelegate : HTSBootAppDelegate <UIApplicationDelegate>

@property (retain, nonatomic) AWEUITaskDelaySpreadExecutor *spreadExecutor;
@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEInfraConfigModuleServiceJXAdapterClass;

- (void)application:(void /* unknown type, empty encoding */)a0 didFailToRegisterForRemoteNotificationsWithError:(void /* unknown type, empty encoding */)a1;
- (void)application:(void /* unknown type, empty encoding */)a0 didRegisterForRemoteNotificationsWithDeviceToken:(void /* unknown type, empty encoding */)a1;
- (void)application:(void /* unknown type, empty encoding */)a0 didRegisterUserNotificationSettings:(void /* unknown type, empty encoding */)a1;
- (void)application:(void /* unknown type, empty encoding */)a0 handleActionWithIdentifier:(void /* unknown type, empty encoding */)a1 forLocalNotification:(void /* unknown type, empty encoding */)a2 withResponseInfo:(void /* unknown type, empty encoding */)a3 completionHandler:(void /* unknown type, empty encoding */)a4;
- (void)application:(void /* unknown type, empty encoding */)a0 didReceiveLocalNotification:(void /* unknown type, empty encoding */)a1;
- (void)application:(void /* unknown type, empty encoding */)a0 handleActionWithIdentifier:(void /* unknown type, empty encoding */)a1 forRemoteNotification:(void /* unknown type, empty encoding */)a2 completionHandler:(void /* unknown type, empty encoding */)a3;
- (void)application:(void /* unknown type, empty encoding */)a0 handleActionWithIdentifier:(void /* unknown type, empty encoding */)a1 forRemoteNotification:(void /* unknown type, empty encoding */)a2 withResponseInfo:(void /* unknown type, empty encoding */)a3 completionHandler:(void /* unknown type, empty encoding */)a4;
- (void)application:(void /* unknown type, empty encoding */)a0 didReceiveRemoteNotification:(void /* unknown type, empty encoding */)a1 fetchCompletionHandler:(void /* unknown type, empty encoding */)a2;
- (void)MOCK_applicationDidBecomeActive:(id)a0;
- (void)MOCK_applicationWillResignActive:(id)a0;
- (void)MOCK_applicationDidEnterBackground:(id)a0;
- (void)MOCK_applicationWillEnterForeground:(id)a0;
- (void)MOCK_applicationWillTerminate:(id)a0;
- (BOOL)isBackgroundFetchLaunch;
- (id)currentBootConfigDowngrade;
- (void)addLaunchTypeFactorWithOptions:(id)a0;
- (id)backgroundFetchConfig;
- (BOOL)enableAsyncBootTaskSpread;
- (BOOL)enableRunLaunchCompletionFirst;
- (long long)markLaunchCompletionType;
- (BOOL)forceRunLaunchCompletionBeforeFeedReady;
- (BOOL)isTaskSpreadExecutor;
- (id)aAWEInfraConfigModuleServiceJXAdapter;
- (id)currentBootConfig;
- (id)bootConfigInterceptor;
- (void)callCompletionHandler:(id /* block */)a0 result:(unsigned long long)a1 delay:(double)a2;
- (BOOL)isSystemBackgroundLaunch;
- (BOOL)isTaskSpreadExecutorForQueue;
- (void)runTaskSpreadExecutorForKey:(const char *)a0 withBlock:(id /* block */)a1;
- (BOOL)downgradeBootTaskAsyncPriority;
- (BOOL)delayLaunchCompletionTaskUntilFeedReady;
- (BOOL)enableBootConfigInterceptorOpt;
- (BOOL)enableFilterEnterForeGroundWhenBGFetchLaunch;
- (id)appEventPlugin;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void).cxx_destruct;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (id)init;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationDidReceiveMemoryWarning:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)application:(id)a0 performFetchWithCompletionHandler:(id /* block */)a1;
- (double)backgroundFetchMinimumInterval;

@end
