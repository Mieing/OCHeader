@class NSMutableArray;

@interface HybridImageURLCacheKeyStorage : NSObject

@property (retain, nonatomic) NSMutableArray *prefetchArray;

+ (void)setPrefetchCacheKey:(id)a0;
+ (id)sharedInstance;

- (void)setPrefetchCacheKey:(id)a0;
- (BOOL)consumePrefetchedCacheKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
