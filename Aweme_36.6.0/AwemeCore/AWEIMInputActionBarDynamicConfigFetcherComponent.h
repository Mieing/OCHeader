@class AWEIMComponentBase, BFCancellationTokenSource, NSString, BFTask, AWEIMComponentManager;
@protocol AWEIMInputActionBarDynamicConfigFetcherAction, AWEIMInputActionBarDynamicConfigConsumerInterface;

@interface AWEIMInputActionBarDynamicConfigFetcherComponent : AWEIMComponentBase <AWEIMInputActionBarDynamicConfigFetcherInterface, AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain) AWEIMComponentBase<AWEIMInputActionBarDynamicConfigConsumerInterface> *consumerComponent;
@property (weak) id<AWEIMInputActionBarDynamicConfigFetcherAction> fetchActionPublisher;
@property (retain) BFTask *dynamicConfigFetcherChainPreTask;
@property (retain) BFTask *dynamicConfigCacheChainPreTask;
@property (retain) BFCancellationTokenSource *cancelTokenSource;
@property (copy) NSString *sortName;
@property (copy) NSString *configName;
@property (nonatomic) double actionBarGetTime;
@property (nonatomic) BOOL enterConversationOptimize;
@property (nonatomic) BOOL dynamicActionbarRefreshOptimize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (unsigned long long)configSceneForConversation;
- (unsigned long long)configDiffSceneForConversation;
- (void)tryToFetchDynamicConfigWithResultConfig:(id)a0;
- (void)interruptedlyFetchDynamicConfig;
- (double)actionBarGetFetchTime;
- (id)tryToCreateDynamicConfigCacheTaskWithResultConfig:(id)a0;
- (id)tryToCreateDynamicConfigFetchingTaskWithResultConfig:(id)a0;
- (id)interruptedlyCreateDynamicConfigCacheTask;
- (id)interruptedlyCreateDynamicConfigFetchingTask;
- (BOOL)shouldFetchDynamicConfigWithResultConfig:(id)a0;
- (id)getDynamicConfigWithConversation:(id)a0;
- (BOOL)saveDynamicConfigCacheWithConfig:(id)a0 conversation:(id)a1;
- (void)__fetchDynamicConfigWithConfigName:(id)a0 sortName:(id)a1 newConfigBlock:(id /* block */)a2;
- (void)__addRequestExtWithParams:(id)a0;
- (void).cxx_destruct;
- (id)conversation;

@end
