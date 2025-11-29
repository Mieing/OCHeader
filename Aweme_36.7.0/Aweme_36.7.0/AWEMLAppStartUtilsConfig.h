@interface AWEMLAppStartUtilsConfig : NSObject

@property (nonatomic) long long span;
@property (nonatomic) long long days;
@property (nonatomic) long long time;
@property (nonatomic) long long offset;
@property (nonatomic) long long startStrategy;
@property (nonatomic) double daysThreshold;
@property (nonatomic) double timesThreshold;
@property (nonatomic) double scoreThreshold;
@property (nonatomic) BOOL isRepeat;
@property (nonatomic) BOOL clearCache;
@property (nonatomic) BOOL skipToday;
@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL dailyPredictEnable;
@property (nonatomic) BOOL weeklyPredictEnable;
@property (nonatomic) long long weeklySpan;
@property (nonatomic) long long weeks;
@property (nonatomic) long long predictWeeks;
@property (nonatomic) double weeksThreshold;
@property (nonatomic) double weeklyScoreThreshold;

- (id)init;

@end
