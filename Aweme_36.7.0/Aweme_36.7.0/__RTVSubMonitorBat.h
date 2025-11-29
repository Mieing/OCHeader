@protocol RxInjector;

@interface __RTVSubMonitorBat : __RTVSubMonitorBase

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) double awakeValue;
@property (nonatomic) double awakeTime;

- (void)rxAwakeFromPropertyInjection;
- (id)fetchCurrentUtilization:(BOOL)a0;
- (unsigned long long)supportAggReasons;
- (BOOL)isEvaluationMonitor;
- (void).cxx_destruct;

@end
