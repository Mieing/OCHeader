@class NSString;

@interface IESECPDPCacheManager : NSObject <IESECPDPCacheService>

@property (nonatomic) BOOL hasLoadCache;
@property (copy, nonatomic) NSString *originCacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)processPromotionPackCacheKeys:(id)a0;
+ (id)createSimplifyCacheKeyWithRequest:(id)a0;
+ (id)cachedResponseForKey:(id)a0;
+ (void)storeResponse:(id)a0 cacheKey:(id)a1;

- (id)cacheWithAPIPathAndParams:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)storeResponse:(id)a0;

@end
