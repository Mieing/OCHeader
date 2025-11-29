@interface SLIABTestManager : NSObject

+ (void)registerExperiment:(id)a0;
+ (id)hostCompatible_dictionaryForKey:(id)a0 defaultValue:(id)a1;
+ (id)getValueForLibraKey:(id)a0 valueType:(unsigned long long)a1 defaultValue:(id)a2;
+ (long long)hostCompatible_integerForKey:(id)a0 defaultValue:(long long)a1;
+ (id)hostCompatible_stringForKey:(id)a0 defaultValue:(id)a1;
+ (BOOL)boolForKey:(id)a0 defaultValue:(BOOL)a1;
+ (void)initialize;
+ (id)numberForKey:(id)a0 defaultValue:(id)a1;
+ (id)dictionaryForKey:(id)a0 defaultValue:(id)a1;
+ (id)arrayForKey:(id)a0 defaultValue:(id)a1;
+ (id)stringForKey:(id)a0 defaultValue:(id)a1;
+ (long long)integerForKey:(id)a0 defaultValue:(long long)a1;

@end
