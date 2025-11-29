@interface TSPKRuleEngineManager : NSObject

@property (copy, nonatomic) id /* block */ extraParamsBuilder;

+ (id)sharedEngine;

- (void)setExtraParams:(id /* block */)a0;
- (void)registerDefaultFunc;
- (void).cxx_destruct;

@end
