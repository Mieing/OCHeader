@class NSArray, NSDateInterval, NSString, NSDate, NSMutableArray;

@interface AWEAntiAddictTimeCounter : NSObject <AWEAntiAddictLogProtocol, AWEAntiAddictCounterProtocol>

@property long long savedCount;
@property (retain) NSMutableArray *activeDateIntervals;
@property (copy) NSArray *constDateIntervals;
@property (retain) NSDate *sessionBeginDate;
@property BOOL sessionResignActive;
@property (retain) NSDateInterval *sessionLastInterval;
@property double sessionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL disableSave;
@property (readonly, copy) NSString *savedKey;
@property (readonly) long long dataIntervalsCount;

+ (id)dateFormatter;
+ (id)moduleName;

- (id)natureUseDurationInTwoWeeksAtDate:(id)a0;
- (long long)fatigueUseDurationAtDate:(id)a0;
- (id)sessionStartTimeAtDate:(id)a0;
- (double)sessionUseDurationAtDate:(id)a0;
- (double)fatigueAtDate:(id)a0;
- (long long)maxMinuteUsedInLast7DaysAtDate:(id)a0;
- (void)fatigueAndDurationAtDate:(id)a0 timeRange:(long long)a1 fatigueUseDuration:(long long *)a2 fatigue:(double *)a3;
- (id)dayAt5IntervalAtDate:(id)a0;
- (double)calculateUseDurationWithActiveIntervals:(id)a0 filterInterval:(id)a1;
- (double)calculateFatigueWithActiveIntervals:(id)a0 filterInterval:(id)a1;
- (id)dayAt0IntervalAtDate:(id)a0;
- (id)natureUseDurationsFromLastDays:(unsigned long long)a0 atDate:(id)a1;
- (void)resetSessionStateWithDate:(id)a0;
- (long long)natureUseDurationAtDate:(id)a0;
- (void)sessionWillResignActiveWithDate:(id)a0;
- (void)sessionDidBecomeActiveWithDate:(id)a0;
- (void)updateSessionDurationWithInterval:(id)a0;
- (void)updateDataWithInterval:(id)a0;
- (void)cleanDataBefore14DaysAgoFromDate:(id)a0;
- (id)calculateSessionUseDurationWithActiveIntervals:(id)a0 atDate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
