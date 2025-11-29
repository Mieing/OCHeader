@class AWEGrouponListDataLocalCache;

@interface AWEGrouponHomepageCacheManager : NSObject

@property (nonatomic) long long cacheValidTimeInHour;
@property (nonatomic) long long timeoutInterval;
@property (nonatomic) long long minUseCacheAwemeNum;
@property (retain, nonatomic) AWEGrouponListDataLocalCache *grouponListCacheInMem;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)fetchSettings;
- (id)getCacheToken;
- (void)checkCacheVaild:(id)a0 resultBlk:(id /* block */)a1;
- (long long)getLynxContainerType;
- (void)configCacheFlagAwemeList:(id)a0;
- (void)checkGrouponCacheValid:(id)a0 resultBlock:(id /* block */)a1;
- (BOOL)hasSaaSFeedInListResponse:(id)a0;
- (void)storeGrouponCacheWithListResponse:(id)a0 transformerList:(id)a1;
- (void)loadGrouponListCacheToMemWithCompletion:(id /* block */)a0 clean:(BOOL)a1;
- (void)clearGrouponListCacheInMem;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
