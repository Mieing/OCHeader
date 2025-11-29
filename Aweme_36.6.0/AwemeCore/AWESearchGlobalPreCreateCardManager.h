@class NSString, NSArray, AWESearchPreCreateCardManager, NSMutableDictionary, NSDictionary, AWESearchUniversalComponentReusePoolConfig, AWESearchUniversalComponentReusePool, CachalotMainLoopIdleTaskManager;

@interface AWESearchGlobalPreCreateCardManager : NSObject <CachalotMainLoopIdleTaskManagerDelegate>

@property (retain, nonatomic) CachalotMainLoopIdleTaskManager *idleTaskManager;
@property (retain, nonatomic) AWESearchUniversalComponentReusePool *reusePool;
@property (retain, nonatomic) AWESearchUniversalComponentReusePoolConfig *reusePoolConfig;
@property (retain, nonatomic) AWESearchPreCreateCardManager *preCreateManager;
@property (retain, nonatomic) NSMutableDictionary *registeredPipelines;
@property (retain, nonatomic) NSMutableDictionary *controllerProxyMap;
@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSArray *pipeLineRenderTypes;
@property (readonly, nonatomic) NSArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)registerPipeline:(id)a0;
- (void)taskWillExecute:(id)a0;
- (void)taskDidExecute:(id)a0 timing:(id)a1 isCanceled:(BOOL)a2;
- (void)addIdleTasksObserver;
- (void)removeIdleTaskObserver;
- (void)addPreCreateCardUITaskWithMainIdleTaskManager:(id)a0;
- (id)viewModelWithViewType:(unsigned long long)a0;
- (void)registerPreCreateCardConfig:(id)a0;
- (void)registerControllerProxy:(id)a0 channel:(id)a1;
- (void)registerPreCreateCardModelDict:(id)a0 cardViewDict:(id)a1 renderType:(unsigned long long)a2;
- (void)addPreCreateDataTaskWithChannel:(id)a0 url:(id)a1 dataModelBlock:(id /* block */)a2 renderModelBlock:(id /* block */)a3 comContextBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)addPreCreateCardUITask;
- (id)fetchComponentWithViewType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
