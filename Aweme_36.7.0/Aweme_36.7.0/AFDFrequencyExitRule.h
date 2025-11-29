@class AFDFrequencyTimeInterval;

@interface AFDFrequencyExitRule : AFDFrequencyRule

@property (retain, nonatomic) AFDFrequencyTimeInterval *countPeriod;
@property (nonatomic) long long neededCount;
@property (retain, nonatomic) AFDFrequencyTimeInterval *unavailablePeriod;
@property (retain, nonatomic) AFDFrequencyTimeInterval *unavailableDelay;
@property (retain, nonatomic) AFDFrequencyTimeInterval *distinctCountInterval;

+ (id)filterDates:(id)a0 inSameTimeInterval:(id)a1 withDate:(id)a2;

- (void)addCount;
- (id)recordedDates;
- (void)addUnavailableBeginDate:(id)a0;
- (id)unavailableBeginDates;
- (BOOL)available;
- (void).cxx_destruct;
- (id)initWithID:(id)a0;
- (void)reset;
- (long long)currentCount;

@end
