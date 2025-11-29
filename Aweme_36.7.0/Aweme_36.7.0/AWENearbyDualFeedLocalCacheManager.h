@class AWENearbySettingsLocalCache, AWENearbyC2ListDataLocalCache, AWENearbyGrouponListDataLocalCache;

@interface AWENearbyDualFeedLocalCacheManager : NSObject

@property (nonatomic) long long timeoutInterval;
@property (nonatomic) long long minUseCacheAwemeNum;
@property (retain, nonatomic) AWENearbySettingsLocalCache *cacheSettingsRspInMem;
@property (retain, nonatomic) AWENearbyC2ListDataLocalCache *cacheFeedRspInMem;
@property (retain, nonatomic) AWENearbyGrouponListDataLocalCache *cacheGrouponFeedRspInMem;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (id)getFeedPreCacheKey;
- (id)getCacheToken;
- (void)checkCacheVaild:(id)a0 resultBlk:(id /* block */)a1;
- (void)configCacheFlagAwemeList:(id)a0;
- (void)storeGrouponFeedCacheWithFeedRsp:(id)a0 resultBlk:(id /* block */)a1;
- (void)checkGrouponCacheValid:(id)a0 resultBlk:(id /* block */)a1;
- (void)storeNearbyFeedCacheWithFeedRsp:(id)a0 resultBlk:(id /* block */)a1;
- (void)getValidNearbyFeedCacheWithBlk:(id /* block */)a0 clean:(BOOL)a1;
- (void)getValidNearbySettingsCacheWithBlk:(id /* block */)a0 clean:(BOOL)a1;
- (void)getValidGrouponFeedCacheWithBlk:(id /* block */)a0 clean:(BOOL)a1;
- (void)clearGrouponFeedRspInMem;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
