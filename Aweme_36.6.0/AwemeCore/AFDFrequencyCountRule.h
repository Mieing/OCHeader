@class AFDFrequencyTimeInterval;

@interface AFDFrequencyCountRule : AFDFrequencyRule

@property (nonatomic) long long maxCount;
@property (retain, nonatomic) AFDFrequencyTimeInterval *period;

- (void)addCount;
- (id)recordedDates;
- (BOOL)available;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (long long)currentCount;

@end
