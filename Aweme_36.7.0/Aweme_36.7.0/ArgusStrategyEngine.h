@class NSDictionary;

@interface ArgusStrategyEngine : NSObject

@property (retain, nonatomic) NSDictionary *strategyImplMap;

- (void)calculate:(id)a0;
- (id)setupStrategyImplMap;
- (void).cxx_destruct;
- (id)init;
- (long long)handlerType;

@end
