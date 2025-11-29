@class NSMutableDictionary;

@interface BDPCDDynamicCardCacheHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *elementViewCacheDictM;
@property (retain, nonatomic) NSMutableDictionary *elementViewCacheDictDictM;
@property (retain, nonatomic) NSMutableDictionary *elementViewCacheHeightDictM;
@property (retain, nonatomic) NSMutableDictionary *elementViewMaxCacheViewCountDict;
@property (nonatomic) long long maxCacheViewCount;
@property (retain, nonatomic) NSMutableDictionary *graphicContainerStatusCacheDict;

+ (id)sharedInstance;

- (id)elementViewCachedWithModel:(id)a0;
- (void)removeDynamicCache;
- (void)cacheElementView:(id)a0 model:(id)a1;
- (id)generateElementViewCacheKeyWithModel:(id)a0;
- (long long)maxCountWithElementView:(id)a0 cacheKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
