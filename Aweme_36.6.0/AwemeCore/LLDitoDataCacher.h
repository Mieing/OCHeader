@class NSMutableDictionary;

@interface LLDitoDataCacher : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheMap;

- (void)clearCacheWithKey:(id)a0;
- (BOOL)hasCacheWithKey:(id)a0;
- (id)cachePageModels;
- (id)fetchCacheItemWithKey:(id)a0;
- (void)cacheNode:(id)a0 cacheKey:(id)a1 atPageModel:(id)a2 extraParams:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
