@class NunkiSafeCache;

@interface NunkiConditionCache : NSObject

@property (retain, nonatomic) NunkiSafeCache *cacheDic;

- (id)conditionConfigForKey:(id)a0;
- (void)setFactorsConfig:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
