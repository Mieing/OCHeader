@class NSHashTable;

@interface HMDAPPForeBackStateMonitor : NSObject

@property (retain, nonatomic) NSHashTable *delegateTable;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } delegate_mutex;
@property (readonly, nonatomic) BOOL isBackground;

+ (BOOL)monitorEnabled;
+ (id)sharedInstance;

- (void)addStatusChangeDelegate:(id)a0;
- (void)removeStatusChangeDelegate:(id)a0;
- (void)updateBackgroundState;
- (void)addAppStateObserverWithSelf;
- (void)MOCK_applicationWillTerminate:(id)a0;
- (void)MOCK_sceneWillEnterForeground:(id)a0;
- (void)MOCK_sceneDidEnterBackground:(id)a0;
- (void)MOCK_sceneWillResignActive:(id)a0;
- (void)MOCK_sceneDidBecomeActive:(id)a0;
- (void)MOCK_applicationWillEnterForeground:(id)a0;
- (void)MOCK_applicationDidEnterBackground:(id)a0;
- (void)MOCK_applicationWillResignActive:(id)a0;
- (void)MOCK_applicationDidBecomeActive:(id)a0;
- (void)willEnterForegroundUpdate;
- (void)didEnterBackgroundUpdate;
- (void)willResignActiveUpdate;
- (void)didBecomeActiveUpdate;
- (void)checkAPPStateObserverWithAppdelegateClass:(Class)a0 sceneDelegateClass:(Class)a1 lifeCycleType:(unsigned long long)a2;
- (void)addAPPForeBackObserver;
- (void)_addAPPForeBackObserver;
- (void)asyncDoubleCheckForSingleScene;
- (void)willTerminateUpdate;
- (void).cxx_destruct;
- (id)init;

@end
