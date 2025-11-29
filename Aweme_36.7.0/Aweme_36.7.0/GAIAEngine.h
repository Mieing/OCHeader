@class NSHashTable;

@interface GAIAEngine : NSObject

@property (retain, nonatomic) NSHashTable *observers;

+ (void)bindPhone;
+ (void)startTasksForKey:(id)a0;
+ (void)startTasksForKey:(id)a0 withObject:(id)a1;
+ (void)hasTryToGetIDFA;
+ (void)didFinishLoadFeed;
+ (void)startSDKRestartTask;
+ (void)rebindPhone;
+ (BOOL)enableAsnycLaunch;
+ (void)startupSDKV2:(id /* block */)a0;
+ (void)startupSDKV1:(id /* block */)a0;
+ (void)startupSDK;
+ (void)luckySDKPrestartup:(id /* block */)a0;
+ (void)luckySDKStartup:(id /* block */)a0;
+ (void)startSDKStartupTask;
+ (void)didBulletInit;
+ (void)appSettingsUpdated;
+ (void)accountDidLogin;
+ (void)accountDidLogout;
+ (void)accountSessionExpired;
+ (void)didSwitchTeenMode;
+ (void)didSwitchBaseMode;
+ (void)hasShownPrivayDialog;
+ (void)didShownPrivacyDialog;
+ (void)didMotionBegin;
+ (void)updateListeningStatus:(long long)a0;
+ (void)updateThermalStatusInfo:(id)a0;
+ (void)gurdKitDidInit;
+ (id)tasksForKey:(id)a0;
+ (void)startSwiftTasksForKey:(id)a0;
+ (void)addGaiaObserver:(id)a0;
+ (void)removeGaiaObserver:(id)a0;
+ (void)initialize;
+ (void)loadImage;
+ (id)sharedInstance;

- (void)startTasksForKey:(id)a0;
- (void)startTasksForKey:(id)a0 withObject:(id)a1;
- (void)_notifyObserverTasksWillStartForKey:(id)a0;
- (void)_notifyObserverTaskWillExecute:(id)a0 forKey:(id)a1;
- (void)_notifyObserverTaskDidExecute:(id)a0 forKey:(id)a1;
- (void)_notifyObserverTasksDidStartForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
