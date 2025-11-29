@interface VIRStrategyEngine : NSObject

+ (id)strategyResultWithKey:(id)a0;
+ (void)addStrategyObserver:(id)a0 forKey:(id)a1;
+ (void)removeStrategyObserver:(id)a0 forKey:(id)a1;
+ (void)addFactorWithKey:(id)a0;
+ (id)buildStrategyObserverForKey:(id)a0 withContainer:(id)a1;
+ (id)observerForKey:(id)a0 withContainer:(id)a1;
+ (void)setupEngine;

@end
