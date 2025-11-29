@class NSHashTable;

@interface FBSDKApplicationDelegate : NSObject {
    NSHashTable *_applicationObservers;
    BOOL _isAppLaunched;
}

@property (class, readonly, nonatomic) FBSDKApplicationDelegate *sharedInstance;

+ (void)load;
+ (void)initializeWithLaunchData:(id)a0;
+ (void)initializeSDK:(id)a0;
+ (long long)applicationState;
+ (BOOL)isSDKInitialized;

- (id)init;
- (void)dealloc;
- (BOOL)application:(id)a0 openURL:(id)a1 options:(id)a2;
- (BOOL)application:(id)a0 openURL:(id)a1 sourceApplication:(id)a2 annotation:(id)a3;
- (BOOL)application:(id)a0 didFinishLaunchingWithOptions:(id)a1;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_logIfAppLinkEvent:(id)a0;
- (void)_logSDKInitialize;
- (BOOL)isAppLaunched;
- (void).cxx_destruct;

@end
