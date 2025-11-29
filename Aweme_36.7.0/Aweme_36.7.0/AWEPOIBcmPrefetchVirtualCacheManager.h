@class NSMutableDictionary;

@interface AWEPOIBcmPrefetchVirtualCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bcmCacheDict;

+ (id)sharedInstance;

- (id)getBcmVirtualCacheForUUID:(id)a0;
- (void)removeBcmVirtualCacheForUUID:(id)a0;
- (void)setBcmVirtualCacheWithFinalBtm:(id)a0 bcmMap:(id)a1 cacheKey:(id)a2;
- (void)clearAllBcmVirtualCache;
- (void).cxx_destruct;
- (id)init;

@end
