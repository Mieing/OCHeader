@class NSString;

@interface IESLLVirgoModuleService : HTSService <IESLLVirgoModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)batchCollectInformation:(id)a0;
+ (id)characterValueForKey:(id)a0;
+ (id)strategyResultWithKey:(id)a0;
+ (void)triggerTimingWithKey:(id)a0;
+ (void)registerUnit:(id /* block */)a0 withKey:(id)a1;
+ (BOOL)virgoEnable;
+ (void)addStrategyObserver:(id)a0 forKey:(id)a1;
+ (void)removeStrategyObserver:(id)a0 forKey:(id)a1;
+ (void)addFactorWithKey:(id)a0;
+ (id)buildStrategyObserverForKey:(id)a0 withContainer:(id)a1;
+ (id)observerForKey:(id)a0 withContainer:(id)a1;
+ (void)commitRule:(id)a0 taskKey:(id)a1;
+ (void)removeRuleWithTaskKey:(id)a0;
+ (void)removeUnitWithKey:(id)a0;
+ (void)registerUnitManager:(id)a0;
+ (id)lifePoiPreloadCharacters;
+ (void)setupEngine;


@end
