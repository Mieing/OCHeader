@class NSString;

@interface BDStrategySelectCacheManager : NSObject <BDStrategySelectCacheProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleSetNamesForCacheKey:(id)a0 inSet:(id)a1;
+ (void)setRuleSetNames:(id)a0 forCacheKey:(id)a1 inSet:(id)a2;
+ (id)uniqueIDWithSetName:(id)a0;
+ (void)loadStrategySelectCache;
+ (void)loadStrategySelectCacheWithMD5Map:(id)a0 signature:(id)a1;
+ (id)ruleSetNamesForInput:(id)a0 withFilterKeys:(id)a1 inSet:(id)a2;
+ (void)setRuleSetNames:(id)a0 forInput:(id)a1 withFilterKeys:(id)a2 inSet:(id)a3;
+ (id)signature;


@end
