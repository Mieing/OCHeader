@class NSString, NSArray, NSMutableDictionary;

@interface AWEThreadOptimizeSchedule : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL isNunkiSchedule;
@property (nonatomic) unsigned long long scheduleType;
@property (nonatomic) long long schedulePriority;
@property (nonatomic) long long availableTiming;
@property (nonatomic) long long timeRangeType;
@property (nonatomic) double lowerTimeRange;
@property (nonatomic) double upperTimeRange;
@property (nonatomic) BOOL triggerLoad;
@property (nonatomic) BOOL triggerLaunchCompletion;
@property (nonatomic) BOOL triggerFeedReady;
@property (nonatomic) BOOL triggerEnterBackground;
@property (nonatomic) BOOL triggerEnterForeground;
@property (nonatomic) double restoreAfterTime;
@property (nonatomic) BOOL restoreAfterNotMatchNunki;
@property (retain, nonatomic) NSArray *matchConfigArray;
@property (nonatomic) long long relativeQoS;
@property (nonatomic) long long absoluteQoS;
@property (nonatomic) unsigned long long qosType;
@property (nonatomic) double dispatchAfterTime;
@property (nonatomic) BOOL suspend;
@property (nonatomic) int priority;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL waitForRestore;
@property (retain, nonatomic) NSMutableDictionary *instantScheduleRecoverRecordMap;

- (id)initWithConfig:(id)a0 key:(id)a1;
- (void).cxx_destruct;

@end
