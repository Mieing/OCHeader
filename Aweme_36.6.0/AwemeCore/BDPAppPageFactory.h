@class NSMutableDictionary, NSString, BDPObjectReusePool, NSMutableSet;

@interface BDPAppPageFactory : NSObject <BDPAppPageFactoryProtocol, BDPAppPreloadCacheDataSource, BDPIndustrySDKMessage>

@property (retain, nonatomic) NSMutableDictionary *preloadPages;
@property (retain, nonatomic) NSMutableSet *loadingPages;
@property (weak, nonatomic) id token;
@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) BDPObjectReusePool *pagePool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tryReleaseAllPreloadAppPage;
+ (void)bootstrapLaunch;
+ (id)getPreloadDataSource;
+ (BOOL)supportPreloadForType:(long long)a0;
+ (void)tryReleasePreloadAppPageForRenderType:(id)a0;
+ (id)sharedManager;

- (void)tryPreloadAppPage:(id)a0 preloadId:(id)a1;
- (BOOL)hasPreLoadAppPageAndPageReadyWithRenderType:(id)a0;
- (void)preloadObjectWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (BOOL)preloadCache:(id)a0 shouldPreloadNextWithExistingObject:(id)a1;
- (void)preloadCache:(id)a0 willReleaseObject:(id)a1;
- (void)industrySDKDidUpdated:(id)a0 preloadId:(id)a1;
- (void)buildAppPageFactory;
- (void)releaseTerminatedPreloadAppPage:(id)a0;
- (void)recieveInterruptionNotification:(id)a0;
- (id)getPreloadAppPageWithUniqueID:(id)a0 renderType:(id)a1 caller:(id)a2 usePreload:(BOOL)a3 preloadId:(id)a4;
- (BOOL)isWebViewPreloadInterruptedWithCaller:(id)a0;
- (void)tryPreloadAppPageForAllTypesWithCaller:(id)a0 preloadId:(id)a1;
- (BOOL)needDelayToIdle;
- (void)executeBlockWhenMainRunloopIdle:(id /* block */)a0;
- (BOOL)enablePreloadForType:(id)a0;
- (id)createAppPageForRenderType:(id)a0 caller:(id)a1 preloadId:(id)a2;
- (void)releaseAllPreloadedAppPage;
- (void)releasePreloadedAppPageForRenderType:(id)a0;
- (id)getReusePageWithRenderType:(id)a0;
- (void)preloadPageWithModel:(id)a0 schema:(id)a1 reader:(id)a2 completion:(id /* block */)a3;
- (id)getPreloadAppPageForRenderType:(id)a0;
- (id)appPageWithUniqueID:(id)a0 renderType:(id)a1 caller:(id)a2 usePreload:(BOOL)a3 preloadId:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
