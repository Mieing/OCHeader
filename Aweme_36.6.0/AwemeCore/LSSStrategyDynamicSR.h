@interface LSSStrategyDynamicSR : LSSBaseStrategy

+ (id)defaultStrategyInstance;

- (id)runLocalStrategy:(id)a0;
- (BOOL)checkIdDictionary:(id)a0;
- (id)initStrategy;
- (id)dynamicResult:(long long)a0;

@end
