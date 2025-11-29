@class NSMutableDictionary;

@interface AWEPOIBcmPreloadVirtualCacheManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *bcmCacheDict;

+ (id)sharedInstance;

- (id)getBcmVirtualCacheForUUID:(id)a0;
- (void)removeBcmVirtualCacheForUUID:(id)a0;
- (id)setBcmVirtualCacheWithFinalBtm:(id)a0 bcmMap:(id)a1;
- (void)clearAllBcmVirtualCache;
- (void).cxx_destruct;
- (id)init;

@end
