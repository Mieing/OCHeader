@class NSString, NSMutableDictionary, NSMutableArray;

@interface ACCToolsPerformanceTracker : NSObject

@property (copy, nonatomic) NSString *endStage;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (retain, nonatomic) NSMutableDictionary *stages;
@property (copy, nonatomic) id /* block */ stageBlock;
@property (retain, nonatomic) NSMutableArray *durationItems;
@property (nonatomic) BOOL isFinished;

+ (id)initTrackerWithEventName:(id)a0;
+ (void)removeTracker:(id)a0;
+ (id)initTrackerWithEventName:(id)a0 eventId:(id)a1;
+ (id)trackerWithEventName:(id)a0 eventId:(id)a1;
+ (void)removeTrackerWithEventName:(id)a0 eventId:(id)a1;
+ (id)trackerWithEventName:(id)a0;
+ (void)removeAllTrackersWithEventName:(id)a0;

- (id)initWithEventName:(id)a0 eventId:(id)a1;
- (id)nowTimeStampNumber;
- (void)appendTrackStage:(id)a0 timeStamp:(id)a1;
- (void)appendTrackStages:(id)a0 timeStamp:(id)a1;
- (id)getDurationWithBegin:(id)a0 end:(id)a1;
- (void)trackWithStages:(BOOL)a0 durations:(BOOL)a1 tempParams:(id)a2;
- (void)trackWithStages:(BOOL)a0 durations:(BOOL)a1;
- (void)appendTrackStage:(id)a0;
- (void)appendTrackStages:(id)a0;
- (void)trackWithTempParams:(id)a0;
- (void)addDurationItemWithName:(id)a0 beginStage:(id)a1 endStage:(id)a2;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (id)initWithEventName:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)track;

@end
