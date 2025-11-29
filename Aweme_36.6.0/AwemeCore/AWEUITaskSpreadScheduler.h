@class AWEUITaskSpreadQueue, CADisplayLink;

@interface AWEUITaskSpreadScheduler : NSObject

@property (retain, nonatomic) AWEUITaskSpreadQueue *queue;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;
@property (nonatomic) struct __CFRunLoopObserver { } *endObserver;
@property (nonatomic) double displayTargetTimestamp;
@property (nonatomic) double runloopBeginTimestamp;
@property (nonatomic) BOOL refreshTimestamp;
@property (nonatomic) BOOL isTracking;
@property (nonatomic) double runningLimit;
@property (nonatomic) BOOL suspended;

+ (id)scheduler;

- (BOOL)cancelGroup:(id)a0;
- (void)flushTask:(id)a0;
- (BOOL)isExistWithTaskID:(id)a0;
- (void)_forceInvokeTasks:(id)a0;
- (void)_addRunloopObserver;
- (void)_setDisplayLinkPaused:(BOOL)a0;
- (void)_removeRunloopObserver;
- (void)_runloopDidEnd;
- (void)_invokeWithLimit:(double)a0;
- (void)flushAll;
- (BOOL)isExistWithGroupID:(id)a0;
- (void)flushGroup:(id)a0;
- (void)invokeTask:(id)a0;
- (BOOL)cancelTask:(id)a0;
- (void)_clear;
- (void).cxx_destruct;
- (void)_run;
- (id)init;
- (void)_setup;
- (void)_displayLinkDidUpdate:(id)a0;
- (void)endImmediately;

@end
