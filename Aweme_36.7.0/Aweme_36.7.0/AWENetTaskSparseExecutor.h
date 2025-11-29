@class NSString, AWENetTaskTimer;
@protocol AWENetTaskExecutorDelegate;

@interface AWENetTaskSparseExecutor : AWENetTaskQueue <AWENetTaskExecutor>

@property (retain, nonatomic) AWENetTaskTimer *timer;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL allTasksFinished;
@property (nonatomic) double interval;
@property (nonatomic) double minDuration;
@property (weak, nonatomic) id<AWENetTaskExecutorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)executorWithDelegate:(id)a0 interval:(double)a1;

- (BOOL)executorFinished;
- (BOOL)executeImmediately:(id)a0;
- (void)startExecute;
- (void)executeTopTask;
- (void)updateQueueStateIfNeeded;
- (void)enqueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)runTask:(id)a0;

@end
