@class NSMutableOrderedSet;

@interface TMNetworkDetectCache : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *cache;

+ (void)updateMaxCacheNum:(unsigned long long)a0;

- (id)certToken;
- (void)removeAllCaches;
- (id)caches;
- (void).cxx_destruct;
- (void)addCache:(id)a0;

@end
