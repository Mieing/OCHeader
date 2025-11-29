@class NSMutableArray;

@interface AWESpecialCardCacheItem : NSObject

@property (retain, nonatomic) NSMutableArray *cacheModels;
@property (nonatomic) long long maxCount;

- (long long)cacheCount;
- (id)cacheModelForAweme:(id)a0;
- (void)addCacheModel:(id)a0;
- (BOOL)containsCacheModelForAweme:(id)a0;
- (void)removeCacheModelForAweme:(id)a0;
- (void).cxx_destruct;
- (void)removeAll;
- (id)init;

@end
