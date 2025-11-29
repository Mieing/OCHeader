@class NSMutableDictionary, AWEUITaskSpreadExecutor, NSString, AWENetTaskSparseExecutor, AWENetTaskConfig;

@interface AWENetTaskManager : NSObject <AWENetTaskExecutorDelegate>

@property (nonatomic) BOOL dispatchStarted;
@property (nonatomic) BOOL allBootStageFinished;
@property (retain, nonatomic) AWENetTaskConfig *config;
@property (retain, nonatomic) AWENetTaskSparseExecutor *feedReadyExecutor;
@property (retain, nonatomic) AWENetTaskSparseExecutor *sparseExecutor;
@property (retain, nonatomic) AWENetTaskSparseExecutor *idleExecutor;
@property (retain, nonatomic) AWEUITaskSpreadExecutor *spreadExcutor;
@property (nonatomic) double initTimestamp;
@property (retain, nonatomic) NSMutableDictionary *taskNameMaper;
@property (nonatomic) BOOL ifFirstVideoFromCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)startWithConfig:(id)a0;
+ (id)sharedInstance;

- (void)startFeedReady;
- (void)executeImmediatelyTaskNamed:(id)a0;
- (BOOL)skipStartFeedReadyForCacheEnabled;
- (void)skipStartFeedReady;
- (BOOL)uiSpreadEnabled;
- (void)startSparse;
- (void)enqueueToUISpread:(id)a0;
- (id)dequeueTaskNamed:(id)a0;
- (BOOL)taskExistNamed:(id)a0;
- (void)startSparseAfterSeconds:(double)a0;
- (void)taskExecutorDidFinishAllTask:(id)a0;
- (void)startIdle;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
