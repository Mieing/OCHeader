@class NunkiSafeCache;

@interface NunkiResultCache : NSObject

@property (retain, nonatomic) NunkiSafeCache *cacheDic;

- (id)resultConfigForKey:(id)a0;
- (void)setResultConfig:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
