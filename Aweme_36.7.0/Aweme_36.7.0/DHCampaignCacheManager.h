@class YYCache;
@protocol AWEStorageServiceFileKitResourceMetricInterface;

@interface DHCampaignCacheManager : NSObject

@property (retain, nonatomic) YYCache *cache;
@property (retain, nonatomic) id<AWEStorageServiceFileKitResourceMetricInterface> resourceMetric;

+ (id)cacheWithDefaultDomain;
+ (id)cacheWithDomain:(id)a0;
+ (id)sharedInstance;
+ (void)setupIfNeeded;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
