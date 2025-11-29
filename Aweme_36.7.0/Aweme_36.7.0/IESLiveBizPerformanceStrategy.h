@protocol IESLiveBizPerformanceStrategyOutput;

@interface IESLiveBizPerformanceStrategy : NSObject

@property (weak, nonatomic) id<IESLiveBizPerformanceStrategyOutput> outputDelegate;

- (void)currentPhonePerformanceLevel:(long long)a0 info:(id)a1;
- (id)p_configPushContent:(long long)a0 info:(id)a1 reason:(id)a2;
- (void).cxx_destruct;

@end
