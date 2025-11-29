@interface BDRuleParameterService : NSObject

+ (void)registerParameterWithKey:(id)a0 type:(unsigned long long)a1 builder:(id /* block */)a2;
+ (void)registerParameterWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (void)updateParameterWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (id)stateParameters;

@end
