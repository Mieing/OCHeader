@interface AWEServiceKitSwift.BridgedAppLifeCycle : NSObject <HTSAppLifeCycle> {
    void /* unknown type, empty encoding */ observerImpl;
    void /* unknown type, empty encoding */ context;
}

- (void)onAppDidBecomeActive;
- (void)onAppModuleWillBecomeActive;
- (void)onAppWillTerminate;
- (void)onAppWillEnterForeground;
- (unsigned long long)instancePriority;
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
- (void).cxx_destruct;
- (id)init;

@end
