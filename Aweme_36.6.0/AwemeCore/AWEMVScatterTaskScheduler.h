@class AWEMVScatterTaskQueue, CADisplayLink;

@interface AWEMVScatterTaskScheduler : NSObject

@property (retain, nonatomic) AWEMVScatterTaskQueue *queue;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;
@property (nonatomic) struct __CFRunLoopObserver { } *endObserver;
@property (nonatomic) double displayTargetTimestamp;
@property (nonatomic) double runloopBeginTimestamp;
@property (nonatomic) BOOL refreshTimestamp;
@property (nonatomic) BOOL isTracking;
@property (nonatomic) unsigned long long incrementTaskID;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL suspended;
@property (nonatomic) double runningLimit;

- (id)invokeBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void)flushTask:(id)a0;
- (BOOL)isExistWithTaskID:(id)a0;
- (id)invokeBlock:(id /* block */)a0 finishBlock:(id /* block */)a1 afterDelay:(double)a2;
- (void)_forceInvokeTasks:(id)a0;
- (void)_addRunloopObserver;
- (void)_setDisplayLinkPaused:(BOOL)a0;
- (void)_removeRunloopObserver;
- (void)_runloopDidEnd;
- (void)_invokeWithLimit:(double)a0;
- (id)invokeBlock:(id /* block */)a0 finishBlock:(id /* block */)a1;
- (id)invokeBlock:(id /* block */)a0 finishBlock:(id /* block */)a1 afterDelay:(double)a2 untilTime:(double)a3;
- (void)flushAll;
- (BOOL)didFinished;
- (BOOL)cancelTask:(id)a0;
- (void)_clear;
- (void).cxx_destruct;
- (void)_run;
- (id)init;
- (id)invokeBlock:(id /* block */)a0;
- (void)_setup;
- (void)cancelAll;
- (void)_displayLinkDidUpdate:(id)a0;
- (void)endImmediately;

@end
