@class NSDictionary, GXLRUCache, NSMutableDictionary;

@interface AWEPOIDetailDataCacheManager : NSObject

@property (retain, nonatomic) GXLRUCache *cache;
@property (copy, nonatomic) NSDictionary *cacheConfig;
@property (nonatomic) long long cacheCapacity;
@property (nonatomic) double cacheDuration;
@property (retain, nonatomic) NSMutableDictionary *trackParamsMap;

+ (id)sharedInstance;

- (void)setUpPOIClientCacheConfig;
- (BOOL)isHitClientCachePreloadWithSchema:(id)a0 bizCode:(id)a1;
- (void)cachePageDataWithSchema:(id)a0 pageModel:(id)a1;
- (void)updateTrackParamsWithParamKey:(id)a0 paramValue:(id)a1 forKey:(id)a2;
- (void)clearExpiredCacheData:(id)a0;
- (id)getCachePageDataWithSchema:(id)a0;
- (id)trackParamsForKey:(id)a0;
- (void)clearTrackParamsWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
