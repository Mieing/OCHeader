@class IESLiveCommonTaskRecorder, CADisplayLink, IESLiveCommonBreakUpTaskPool, IESLiveCommonBackgroundTaskScheduler, IESLiveCommonNormalTaskScheduler, IESLiveCommonTaskQueue;
@protocol IESLiveCommonTaskInspection;

@interface IESLiveCommonTaskScheduler : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) IESLiveCommonBreakUpTaskPool *breakUpTaskPool;
@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;
@property (nonatomic) struct __CFRunLoopObserver { } *endObserver;
@property (nonatomic) BOOL refreshTimestamp;
@property (nonatomic) BOOL loopLoadFixTime;
@property (nonatomic) double loopFixTimeInterval;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double displayTargetTimestamp;
@property (nonatomic) double runloopBeginTimestamp;
@property (nonatomic) double frameInterval;
@property (nonatomic) BOOL isSuspend;
@property (nonatomic) BOOL trackingModeEnable;
@property (nonatomic) BOOL isTracking;
@property (nonatomic) BOOL onlyDefaultModeEnable;
@property (nonatomic) BOOL optBusyRunLoopEnable;
@property (nonatomic) BOOL preRunLoopBusy;
@property (retain, nonatomic) IESLiveCommonNormalTaskScheduler *normalTaskScheduler;
@property (retain, nonatomic) IESLiveCommonBackgroundTaskScheduler *backgroundTaskScheduler;
@property (retain, nonatomic) IESLiveCommonTaskQueue *prepareQueue;
@property (retain, nonatomic) IESLiveCommonTaskRecorder *taskRecorder;
@property (weak, nonatomic) id<IESLiveCommonTaskInspection> inspection;

+ (id)scheduling:(id)a0 invoke:(id /* block */)a1;
+ (void)cancelScheduling:(id)a0;
+ (id)scheduling:(id)a0 invoke:(id /* block */)a1 finish:(id /* block */)a2;
+ (BOOL)validateTaskParam:(id)a0;
+ (id)startSchedulingTask:(id)a0 invoke:(id /* block */)a1 finish:(id /* block */)a2;
+ (id)scheduling:(id /* block */)a0;
+ (void)cancel:(id)a0;
+ (id)scheduler;

- (void)flushTask:(id)a0;
- (id)invokeBreakUpBlock:(id /* block */)a0 label:(id)a1 level:(long long)a2 option:(long long)a3 groupId:(id)a4 finishBlock:(id /* block */)a5;
- (void)flushGroupTaskWithId:(id)a0;
- (BOOL)cancelGroupTaskWithId:(id)a0;
- (BOOL)isExistWithTaskID:(id)a0;
- (void)_forceInvokeTasks:(id)a0;
- (void)_addRunloopObserver;
- (void)_setDisplayLinkPaused:(BOOL)a0;
- (void)_removeRunloopObserver;
- (void)_runloopDidEnd;
- (void)_invokeWithLimit:(double)a0;
- (BOOL)didFinished;
- (BOOL)isExistWithGroupID:(id)a0;
- (void)checkThread:(id)a0;
- (void)suspendWithTime:(long long)a0;
- (id)invokeTask:(id)a0 afterDelay:(double)a1 finishBlock:(id /* block */)a2;
- (void)forceInvokePendingTask:(id)a0;
- (void)cancelPendingTask:(id)a0;
- (void)setupPendingTaskScheduler;
- (id)invokeBlock:(id /* block */)a0 taskType:(long long)a1 label:(id)a2 level:(long long)a3 afterDelay:(double)a4 option:(long long)a5 groupId:(id)a6 finishBlock:(id /* block */)a7;
- (id)_invokeTask:(id)a0;
- (void)invokeTaskIfNeeded:(id)a0;
- (void)arrangeTask:(id)a0 prioritized:(BOOL)a1;
- (void)_runIfNeed;
- (void)_clearIfNeed;
- (id)invokeAsyncBlock:(id /* block */)a0 label:(id)a1 level:(long long)a2 groupId:(id)a3 finishBlock:(id /* block */)a4;
- (void)flushAllTask;
- (void)reportTrace;
- (BOOL)cancelTask:(id)a0;
- (void)_clear;
- (void).cxx_destruct;
- (void)suspend;
- (id)init;
- (void)resume;
- (void)_displayLinkDidUpdate:(id)a0;
- (void)endImmediately;

@end
