@class UIWindow, NSObject, NSString, FlutterLaunchEngine, FlutterPluginAppLifeCycleDelegate;
@protocol FlutterPluginRegistrant;

@interface FlutterAppDelegate : UIResponder <UIApplicationDelegate, FlutterPluginRegistry, FlutterAppLifeCycleProvider> {
    NSObject<FlutterPluginRegistrant> *_weakRegistrant;
    NSObject<FlutterPluginRegistrant> *_strongRegistrant;
}

@property (copy, nonatomic) id /* block */ rootFlutterViewControllerGetter;
@property (retain, nonatomic) FlutterPluginAppLifeCycleDelegate *lifeCycleDelegate;
@property (retain, nonatomic) FlutterLaunchEngine *launchEngine;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) NSObject<FlutterPluginRegistrant> *pluginRegistrant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)takeLaunchEngine;
- (BOOL)application:(id)a0 willFinishLaunchingWithOptions:(id)a1;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (id)rootFlutterViewController;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)applicationWillTerminate:(id)a0;
- (void)application:(id)a0 didRegisterUserNotificationSettings:(id)a1;
- (void)application:(id)a0 didRegisterForRemoteNotificationsWithDeviceToken:(id)a1;
- (void)application:(id)a0 didFailToRegisterForRemoteNotificationsWithError:(id)a1;
- (void)application:(id)a0 didReceiveLocalNotification:(id)a1;
- (void)userNotificationCenter:(id)a0 willPresentNotification:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)isFlutterDeepLinkingEnabled;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (BOOL)handleOpenURL:(id)a0 options:(id)a1 relayToSystemIfUnhandled:(BOOL)a2;
- (BOOL)application:(id)a0 handleOpenURL:(id)a1;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (void)application:(id)a0 performActionForShortcutItem:(id)a1 completionHandler:(id /* block */)a2;
- (void)application:(id)a0 handleEventsForBackgroundURLSession:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)application:(id)a0 continueUserActivity:(id)a1 restorationHandler:(id /* block */)a2;
- (id)registrarForPlugin:(id)a0;
- (BOOL)hasPlugin:(id)a0;
- (id)valuePublishedByPlugin:(id)a0;
- (void)addApplicationLifeCycleDelegate:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)delegateRespondsSelectorToPlugins:(SEL)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)logCapabilityConfigurationWarningIfNeeded:(SEL)a0;
- (BOOL)application:(id)a0 shouldSaveApplicationState:(id)a1;
- (BOOL)application:(id)a0 shouldRestoreApplicationState:(id)a1;
- (BOOL)application:(id)a0 shouldSaveSecureApplicationState:(id)a1;
- (BOOL)application:(id)a0 shouldRestoreSecureApplicationState:(id)a1;
- (long long)lastAppModificationTime;
- (void).cxx_destruct;

@end
