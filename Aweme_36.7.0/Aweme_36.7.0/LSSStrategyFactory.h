@class NSDictionary;

@interface LSSStrategyFactory : NSObject

@property (copy, nonatomic) NSDictionary *name2StrategyClassMap;

+ (id)defaultStrategyFactory;

- (id)runStartegy:(long long)a0 projectKey:(id)a1 sdkInfo:(id)a2;
- (void)updateStrategyInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
