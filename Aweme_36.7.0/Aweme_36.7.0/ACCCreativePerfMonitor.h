@class RACDisposable, NSString, ACCCameraSubscription, ACCCreativePerfBasePlugin, NSMutableDictionary, NSMutableSet, NSObject, NSMutableArray, ACCPerfBizInfo;
@protocol OS_dispatch_queue;

@interface ACCCreativePerfMonitor : NSObject <ACCPerfReportDelegate, ACCPerfMonitorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sampleQueue;
@property (nonatomic) unsigned long long currentMonitorPage;
@property (nonatomic) unsigned int perfType;
@property (retain, nonatomic) RACDisposable *pageDisposable;
@property (retain, nonatomic) NSMutableDictionary *currentMonitorEventHash;
@property (retain, nonatomic) ACCCreativePerfBasePlugin *basePlugin;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSMutableSet *currentActions;
@property (retain, nonatomic) NSMutableArray *sceneQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ contextParams;
@property (retain, nonatomic) ACCPerfBizInfo *perfBizInfo;

- (void)startCreativePathPerfMonitor;
- (void)endCreativePathMonitor;
- (void)startPerfMonitorWithScene:(id)a0 perfType:(unsigned int)a1 params:(id)a2;
- (void)startPerfMoniorWithScene:(id)a0 params:(id)a1;
- (void)stopPerfMonitorWithScene:(id)a0;
- (void)takeFluencyMonitorWithScene:(id)a0 params:(id)a1;
- (void)trackBaseInfoOnceImmediatelyWithScene:(id)a0;
- (void)addDegradeSubscriber:(id)a0;
- (void)pushCreativeActionTag:(id)a0;
- (void)popCreativeActionTag:(id)a0;
- (id)currentCreativeActionTags;
- (void)addCustomActionTag:(id)a0 forKey:(id)a1;
- (void)removeCustomActionTagForKey:(id)a0;
- (id)getCreativeCurrentPerfContextParams;
- (void)trackCreativeInitializeBaseInfo;
- (void)onTriggerDegradeWithPerfType:(unsigned int)a0 degradeType:(unsigned long long)a1 degradeLevel:(unsigned long long)a2;
- (void)p_clearMonitor;
- (void)p_startBasePerfMonitor;
- (void)p_startPageMonitorWithPage:(unsigned long long)a0;
- (void)updateLastScene;
- (id)p_loadFpsPlugin;
- (void)p_preparePluginEnv:(id)a0;
- (void)updateAllPluginActionName;
- (id)generateCurrentActionName;
- (void)startFluencyMonitorWithScene:(id)a0 params:(id)a1;
- (void)onReportMonitorDataWithKey:(id)a0 data:(id)a1;
- (void)onPluginCleard:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
