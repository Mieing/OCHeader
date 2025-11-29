@class NSObject;
@protocol OS_dispatch_source;

@interface AWEApplogDynamicFreqPredictExitStrategy : AWEApplogDynamicFreqStrategy

@property (copy, nonatomic) id /* block */ cancelStrategyBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double strategyValidTimeInterval;
@property (nonatomic) double exitPredictScoreThreshold;

- (void)onStrategyInit;
- (id)initWithStrategyName:(id)a0 config:(id)a1 delegate:(id)a2;
- (void)updateValidState:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
