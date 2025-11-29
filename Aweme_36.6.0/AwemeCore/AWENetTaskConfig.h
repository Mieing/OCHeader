@class NSArray, NSDictionary;

@interface AWENetTaskConfig : NSObject

@property (nonatomic) BOOL dispatchEnabled;
@property (nonatomic) double maxDurationForWaitngFeed;
@property (nonatomic) double sparseDelayTime;
@property (nonatomic) double feedReadyTaskInterval;
@property (nonatomic) double sparseTaskInterval;
@property (nonatomic) double idleTaskInterval;
@property (retain, nonatomic) NSArray *droppedTasks;
@property (retain, nonatomic) NSArray *immediatelyTasks;
@property (retain, nonatomic) NSArray *feedReadyTasks;
@property (retain, nonatomic) NSArray *sparseTasks;
@property (retain, nonatomic) NSArray *idleTasks;
@property (retain, nonatomic) NSArray *allowAfterFeedReadyTasks;
@property (retain, nonatomic) NSDictionary *immediatelyTasksDelayConfig;
@property (nonatomic) BOOL skipStartFeedReadyForCacheEnabled;

+ (id)config;

- (void).cxx_destruct;
- (id)init;

@end
