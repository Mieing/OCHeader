@class NSString, NSMutableArray;

@interface HTSAppLifeCycleCenter : NSObject <HTSBundleLoaderDelegate, BCAABundleListener, HTSAppLifeCycle>

@property (retain, nonatomic) NSMutableArray *lifeCycleObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCenter;

- (void)bundleDidActived:(id)a0 machoHeader:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a1 fromBundle:(id)a2 enterTag:(id)a3 cost:(double)a4;
- (void)onAppDidBecomeActive;
- (void)addSwiftObservers:(id)a0;
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
- (void)onAppDidRegisterNotificationSetting;
- (id)onAppHandleIntent;
- (id)_parseModulesInMachO:(struct mach_header_64 { unsigned int x0; int x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; } *)a0;
- (void)resortModules;
- (id)_snapshotModules;
- (void)bundleLoader:(id)a0 didLoadBundle:(id)a1;
- (void)bundleLoader:(id)a0 willUnLoadName:(id)a1;
- (id)initPrivate;
- (void).cxx_destruct;

@end
