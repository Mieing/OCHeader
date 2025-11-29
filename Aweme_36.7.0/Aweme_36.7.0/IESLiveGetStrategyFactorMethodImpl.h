@protocol IESLiveStrategyService;

@interface IESLiveGetStrategyFactorMethodImpl : IESLiveGetStrategyFactorMethod

@property (retain, nonatomic) id<IESLiveStrategyService> strategyService;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
