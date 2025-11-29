@class NSMutableArray;

@interface AWEFeedRetrieveDisableRecommendUserFrequencyChecker : NSObject

@property (nonatomic) long long hourLimit;
@property (nonatomic) long long exitTimesLimit;
@property (nonatomic) long long exitDayDuration;
@property (retain, nonatomic) NSMutableArray *showBottomBarDateRecord;

- (void)restoreRecord;
- (BOOL)checkFrequencyValid;
- (BOOL)checkExitPeriodValid;
- (BOOL)isDate:(id)a0 withinStartDate:(id)a1 andEndDate:(id)a2;
- (BOOL)checkShowPrerequisitesMatched;
- (id)initWithHourLimit:(long long)a0 exitTimesLimit:(long long)a1 exitDayDuration:(long long)a2;
- (void)recordShowBottomBar;
- (void)recordClickBottomBar;
- (void).cxx_destruct;

@end
