@interface NunkiStrategyParser : NSObject

+ (id)parseStrategyWithKey:(id)a0;
+ (id)parseResultWithKey:(id)a0;
+ (id)parseConditionWithKey:(id)a0;
+ (id)parseSmartStrategyConfigWithKey:(id)a0;
+ (id)parseStrategyWithKey:(id)a0 config:(id)a1;
+ (void)alogMonitorWithKey:(id)a0;
+ (id)strategyResultWithStrategyKey:(id)a0 type:(id)a1 level:(id)a2 params:(id)a3;
+ (id)resourceParseEntityWith:(id)a0 modelClass:(Class)a1 config:(id)a2;
+ (id)__parseEntityWith:(id)a0 modelClass:(Class)a1 config:(id)a2;
+ (id)__parseEntitysWith:(id)a0 modelClass:(Class)a1 config:(id)a2;
+ (id)parseConditionWithKey:(id)a0 config:(id)a1;
+ (id)parseResultWithKey:(id)a0 config:(id)a1;

@end
