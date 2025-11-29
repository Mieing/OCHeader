@class NunkiSafeCache;

@interface NunkiDecisionCache : NSObject

@property (retain, nonatomic) NunkiSafeCache *cacheDic;
@property (retain, nonatomic) NunkiSafeCache *cacheResultDic;

- (void)removeAllDecisionCache;
- (id)cacheDecisionForKey:(id)a0;
- (void)setDecision:(id)a0 forKey:(id)a1;
- (id)decisionCacheResultForKey:(id)a0;
- (void)setDecisionCacheResult:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
