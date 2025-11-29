@interface AWEAntiAddictThresholdRule : NSObject

+ (id)sharedRule;
+ (BOOL)satisfiedWithStrategyModel:(id)a0 useDuration:(double)a1 fatigue:(double)a2 atDate:(id)a3;

- (BOOL)satisfiedWithStrategyModel:(id)a0 curIndex:(long long)a1 useDuration:(double)a2 fatigue:(double)a3 atDate:(id)a4;

@end
