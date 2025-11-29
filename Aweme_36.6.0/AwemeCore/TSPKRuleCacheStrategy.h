@class NSString;

@interface TSPKRuleCacheStrategy : NSObject <TSPKCacheUpdateStrategy, TSPKCacheStrategyGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generate:(id)a0;

- (id)convertEventDataToParams:(id)a0 source:(id)a1;
- (BOOL)needUpdate:(id)a0 cacheStore:(id)a1;

@end
