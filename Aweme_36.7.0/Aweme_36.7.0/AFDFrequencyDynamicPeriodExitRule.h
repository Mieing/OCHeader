@interface AFDFrequencyDynamicPeriodExitRule : AFDFrequencyExitRule

@property (copy, nonatomic) id /* block */ dynamicUnavailablePeriod;

- (long long)exitCount;
- (id)unavailablePeriod;
- (void)addUnavailableBeginDate:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
