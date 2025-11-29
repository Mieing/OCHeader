@interface IESECSliceXABTestServiceImpl : NSObject <SLIABTestService>

+ (void)registerABTestExperiment:(id)a0;
+ (id)valueForLibraKey:(id)a0 defaultValue:(id)a1;
+ (long long)hostCompatibleIntegerValueForKey:(id)a0 defaultValue:(long long)a1;
+ (id)hostCompatibleStringValueForKey:(id)a0 defaultValue:(id)a1;
+ (id)hostCompatibleDictionaryValueForKey:(id)a0 defaultValue:(id)a1;

@end
