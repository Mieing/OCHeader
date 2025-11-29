@class NunkiSafeCache;

@interface NunkiFactorCache : NSObject

@property (retain, nonatomic) NunkiSafeCache *cacheDic;

- (void)removeAllFactorsCache;
- (id)cacheFactorForKey:(id)a0;
- (void)setCacheFactor:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
