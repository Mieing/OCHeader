@class NSString, BDPClientAIDetecionConfig, BDPUniqueID, NSMutableDictionary, NSMutableArray, NSObject, BDPClientAIDetectionModel, NSCache;
@protocol OS_dispatch_queue;

@interface BDPClientAIDetectionManager : NSObject <BDPWebViewPageLifeCycleMessage, BDPBootLifeCycleMessage, BDPAppRouteChangeMessage, BDPAppPreloadMessage, BDPContainerLifeCycleMessage, BDPAPPFramePreloadProtocol> {
    BOOL _hasUpdateSetting;
    NSMutableArray *_detectionServiceArray;
    BDPClientAIDetecionConfig *_detectionConfig;
    BDPUniqueID *_uniqueID;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSCache *shieldedPage;
@property (copy, nonatomic) BDPClientAIDetectionModel *cacheModel;
@property (retain, nonatomic) NSMutableDictionary *detectionCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (void)startPreload;
+ (void)updateRelativeDataIfNeed;
+ (void)bootstrapLaunch;
+ (id)sharedManager;

- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationReadyToBootWithUniqueID:(id)a0 schema:(id)a1 launchParam:(id)a2;
- (void)pageWillSetup:(id)a0 pageURL:(id)a1 pageID:(long long)a2;
- (void)pageLCPArrive:(id)a0 pageID:(long long)a1;
- (void)pageEmbedHTMLWebViewUpdateSuccess:(id)a0;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageWillLeaveWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppNavRouteChangeWillLeaveNotMPViewController:(id)a0;
- (void)appPreloadHasBeenTriggeredWithInfos:(id)a0;
- (id)getPageShieldStrategyConfig;
- (long long)getPageShieldStrategy;
- (void)triggerShieldPageError:(id)a0;
- (long long)getPageShieldCacheTime;
- (void)p_tryFetchServicesDetectionInfoWithModel:(id)a0;
- (void)calculateViewHashAndCheckIsNeedShieldPageWithUniqueID:(id)a0 handleNotPageShiedBlock:(id /* block */)a1;
- (void)p_fetchStrategyWith:(id)a0 h5WebviewUrl:(id)a1 pageHashStr:(id)a2 uniqueID:(id)a3 model:(id)a4;
- (void)cleanClientAIModelIfNeeded;
- (void)cleanClientAIDirIfNeeded;
- (id)getSecurityRulesAllFeaturesForPageUrl:(id)a0;
- (id)getSecurityRulesBackendFeaturesForPageUrl:(id)a0;
- (id)getSecurityRulesSceneListForPageUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
