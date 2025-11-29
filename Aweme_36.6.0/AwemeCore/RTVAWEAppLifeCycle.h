@class RTVAWEAppDelegate, NSString;

@interface RTVAWEAppLifeCycle : NSObject <AWERTVLongConnectionMessage, RTVXRVoipPushRegisterDelegate, HTSAppLifeCycle>

@property (weak, nonatomic) RTVAWEAppDelegate *appDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lazyLoadInjectorAnnotation;

- (void)onAppDidBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)onAppDidReceiveMemoryWarning;
- (void)onAppDidRegisterDeviceToken;
- (void)onAppDidFailToRegisterForRemoteNotifications;
- (void)onAppDidReceiveLocalNotification;
- (void)onAppDidReceiveRemoteNotification;
- (void)onAppHandleNotification;
- (void)onAppPerformBackgroundFetch;
- (void)onHandleAppShortcutAction;
- (void)onHandleEventsForBackgroundURLSession;
- (BOOL)onHandleAppOpenUrl;
- (BOOL)onHandleAppContinueUserActivity;
- (void)aweRTVLongConnectionDidReceiveMsg:(id)a0;
- (void)appDidLaunch;
- (void)appAfterLaunch;
- (void)__forceInitialAppDelegate;
- (long long)__delayInterval;
- (void)__forceInitialAppDelegateCompletion:(id /* block */)a0;
- (id)__application;
- (void)registerVoIPPush;
- (void)voipPushRegister:(id)a0 didReceivePayload:(id)a1;
- (BOOL)__delayOptimize;
- (void).cxx_destruct;
- (void)dealloc;

@end
