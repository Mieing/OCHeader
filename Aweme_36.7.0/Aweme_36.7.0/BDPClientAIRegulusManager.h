@class NSMutableDictionary, NSDictionary, NSMutableSet, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_semaphore;

@interface BDPClientAIRegulusManager : NSObject <BDPBootLifeCycleMessage, BDPContainerLifeCycleMessage, BDPWebViewPageLifeCycleMessage, BDPAppRouteChangeMessage>

@property (retain, nonatomic) NSDictionary *regulusRuleMaps;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *loadersLock;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *rwLock;
@property (retain, nonatomic) NSMutableDictionary *regulusRuleDownloadingLoaders;
@property (retain, nonatomic) NSMutableDictionary *regulusRuleEvaluatingLoaders;
@property (retain, nonatomic) NSMutableDictionary *regulusRuleReadyLoaders;
@property (retain, nonatomic) NSMutableArray *hyperLinkClipData;
@property (retain, nonatomic) NSMutableSet *evalRules;
@property (nonatomic) BOOL isClientRegulusEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)shareInstance;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)pageLCPArrive:(id)a0 pageID:(long long)a1;
- (void)onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)setupClientAIRegulusDataIfNeeded:(BOOL)a0;
- (void)evaluateClientAIStrategyWithModels:(id)a0 uniqueID:(id)a1 loadCompletionBlock:(id /* block */)a2;
- (BOOL)enableStrategyDebug;
- (void)recordHyperLinkFromClipBoard:(id)a0;
- (id)getHyperLinkClipDatas;
- (void).cxx_destruct;
- (id)init;

@end
