@class NSLock, FBKVOController, AWEIMStage, NSError, NSMutableArray, NSObject;
@protocol AWEIMProcessEventDelegate;

@interface AWEIMProcess : NSObject

@property (retain, nonatomic) NSObject *context;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableArray *stageArray;
@property (retain, nonatomic) NSMutableArray *startHandlerArray;
@property (retain, nonatomic) NSMutableArray *finishHandlerArray;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) FBKVOController *stageStatusKVOController;
@property (nonatomic) double startTime;
@property (retain, nonatomic) AWEIMStage *currentRunningStage;
@property (weak, nonatomic) id<AWEIMProcessEventDelegate> delegate;

- (void)addStages:(id)a0;
- (void)addFinishHandler:(id /* block */)a0;
- (void)startNextStageIfNeeded;
- (void)p_logProgressFinishTimeCostIfNeed;
- (void)p_logStageStatusChange:(id)a0;
- (void)p_logStageFinishTimeCostIfNeed:(id)a0;
- (void)addStartHandler:(id /* block */)a0;
- (id)getCurrentRunningStage;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
