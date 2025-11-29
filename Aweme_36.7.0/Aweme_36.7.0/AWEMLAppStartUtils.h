@class NSMutableArray, AWEMLAppStartUtilsConfig;
@protocol AWEStorageServiceKVInterface;

@interface AWEMLAppStartUtils : NSObject

@property (retain, nonatomic) AWEMLAppStartUtilsConfig *config;
@property (retain, nonatomic) NSMutableArray *appStartTimeList;
@property (retain, nonatomic) NSMutableArray *appWeeklyStartTimeList;
@property (nonatomic) long long newStartTimeMs;
@property (nonatomic) long long maxThreshold;
@property (nonatomic) long long minThreshold;
@property (nonatomic) long long weeklyMinThreshold;
@property (retain, nonatomic) NSMutableArray *startupPeriodList;
@property (retain, nonatomic) NSMutableArray *startupDaysPerPeriod;
@property (retain, nonatomic) NSMutableArray *startupTimesPerPeriod;
@property (retain, nonatomic) NSMutableArray *filterByStartupDays;
@property (retain, nonatomic) NSMutableArray *filterByStartupTimes;
@property (retain, nonatomic) NSMutableArray *scoreFromStartupTimes;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> kvStorageHandler;

+ (id)sharedInstance;

- (void)setupConfig:(id /* block */)a0;
- (id)predictAppStartTimeList;
- (id)predictWeeklyAppStartTimeList;
- (void)updateAppStartTime:(long long)a0;
- (void)updateAppStartTimeList;
- (void)updateAppWeeklyStartTimeList;
- (void)generateStartupPeriodList;
- (void)generateStartupDaysPerPeriod;
- (void)generateStartupTimesPerPeriod;
- (void)filterByStartupDaysWithDaysThreshold:(double)a0 startupDaysPerPeriod:(id)a1;
- (void)filterByStartupTimesWithTimesThreshold:(double)a0 startupTimesPerPeriod:(id)a1;
- (void)filterByStartupTimesV2WithStartupDays:(id)a0 startupTimesPerPeriod:(id)a1 scoreThreshold:(double)a2 isRepeat:(BOOL)a3;
- (id)getAbsoluteTimeArray:(id)a0;
- (void)generateWeeklyStartupPeriodList;
- (void)generateWeeklyStartupDaysPerPeriod;
- (void)generateWeeklyStartupTimesPerPeriod;
- (void)filterByStartupDaysWithWeeksThreshold:(double)a0 startupDaysPerPeriod:(id)a1;
- (id)getWeeklyAbsoluteTimeArray:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
