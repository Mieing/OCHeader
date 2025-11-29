@class AWEGrouponHomepageCacheSettingsModel, AWEGrouponCacheLoadV2Config, AWEGrouponHomepageCacheDataLoadResult;

@interface AWEGrouponHomepageDataCacheManager : NSObject

@property (weak, nonatomic) AWEGrouponCacheLoadV2Config *cacheLoadConfig;
@property (retain, nonatomic) AWEGrouponHomepageCacheSettingsModel *settingsModel;
@property (retain, nonatomic) AWEGrouponHomepageCacheDataLoadResult *cacheDataLoadResult;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)updateHomepageCacheDataWithListResponse:(id)a0 transformerList:(id)a1;
- (void)preloadCacheToMemory;
- (long long)getLynxContainerType;
- (BOOL)hasSaaSFeedInListResponse:(id)a0;
- (void)setupCommonConfig;
- (void)loadGrouponHomepageDataFromDisk;
- (BOOL)canCacheDataWithTransformerList:(id)a0;
- (id)generateCacheToken;
- (void)preprocessCacheData:(id)a0;
- (void)preprocessCacheMutipleTabModel:(id)a0;
- (void)trackCacheUseResult:(BOOL)a0 message:(id)a1;
- (void)checkGrouponCacheEnableWithCache:(id)a0;
- (void)checkGrouponCacheValidWithCache:(id)a0 resultBlock:(id /* block */)a1;
- (id)filterDataWithAwemeList:(id)a0;
- (void)loadHomepageCacheWithConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
