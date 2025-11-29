@class NSMutableDictionary, NSDictionary, NSString, AWEGrouponCacheLoadV2Config, NSMutableArray;
@protocol AWEGrouponTransformerSettingManagerProtocol, AWEHttpTask;

@interface AWEGrouponPreloadManager : NSObject <AWEUserMessage>

@property (weak, nonatomic) id<AWEHttpTask> currentRequestTask;
@property (retain, nonatomic) id<AWEGrouponTransformerSettingManagerProtocol> nearbySettingManager;
@property (retain, nonatomic) id<AWEGrouponTransformerSettingManagerProtocol> grouponSettingManager;
@property (nonatomic) BOOL isVideoPreFetch;
@property (copy, nonatomic) NSDictionary *commonData;
@property (nonatomic) BOOL frencEnable;
@property (nonatomic) BOOL frencEnd;
@property (nonatomic) BOOL commonDataEnd;
@property (nonatomic) BOOL loadGrouponLocalCacheEnd;
@property (weak, nonatomic) AWEGrouponCacheLoadV2Config *managerConfig;
@property (retain, nonatomic) NSMutableDictionary *cachedDataModels;
@property (nonatomic) BOOL isNearbyRequestOnAir;
@property (nonatomic) BOOL isGrouponRequestOnAir;
@property (retain, nonatomic) NSMutableArray *homepageRequestTaskQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadResourceIfNeed;
+ (void)preloadTransformerIfNeed;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishLogin;
- (void)initProperty;
- (void)handleAllDataModelWithBlk:(id /* block */)a0;
- (BOOL)hasSaaSFeedInListResponse:(id)a0;
- (id)filterDataWithAwemeList:(id)a0;
- (id)cachedDataModelWithType:(long long)a0;
- (void)setupDualSettingWithType:(long long)a0;
- (BOOL)canNotUsePreload;
- (BOOL)enableDualLocalCache:(long long)a0;
- (void)loadFeedRefreshCacheWithCacheModel:(id)a0 dataType:(long long)a1 completion:(id /* block */)a2;
- (void)preprocessCacheData:(id)a0 cacheModel:(id)a1 dataFrom:(unsigned long long)a2 dataType:(long long)a3;
- (void)trackerCacheUse:(BOOL)a0 message:(id)a1 isPreloadCache:(BOOL)a2 cacheType:(unsigned long long)a3 dataType:(long long)a4;
- (void)handleGrouponCacheLoadV2ConfigWithCache:(id)a0;
- (void)asyncGetGrouponFeedCache:(id /* block */)a0;
- (long long)preModeToDatType:(unsigned long long)a0;
- (id)allDualCacheModels;
- (void)loadNeabryDualFeedCacheCompletion:(id /* block */)a0;
- (void)loadGrouponFeedCacheCompletion:(id /* block */)a0;
- (void)handleDualListResponseBeforeUseWithCacheModel:(id)a0 dataType:(long long)a1 completion:(id /* block */)a2;
- (void)startWithNearbyCommonData:(id)a0;
- (void)trackPreRequestUnavailable:(id)a0 errorMessage:(id)a1;
- (void)enablePreload:(unsigned long long)a0 cacheModel:(id)a1 completion:(id /* block */)a2;
- (void)userL3locationChanged;
- (void)cleanPreload:(long long)a0;
- (void)getDualPreloadLocalDataWithCacheModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
