@class NSRecursiveLock, NSMutableDictionary, JSContext, NSThread, NSObject;
@protocol OS_dispatch_queue;

@interface MMWebJsTimerHandler : NSObject

@property (retain) NSMutableDictionary *timerObjs;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property BOOL hasStopped;
@property (nonatomic) BOOL addRunloopCommonMode;
@property (weak, nonatomic) JSContext *jsContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSThread *subThread;

- (id)init;
- (void)dealloc;
- (void)invalidAllTimers;
- (void)setupTimerBlock:(id)a0;
- (void)addApi_setTimerHandler:(id)a0;
- (void)addApi_clearTimerHandler:(id)a0;
- (unsigned int)mainThread_addTimer:(unsigned int)a0 withTime:(float)a1 isRepeat:(BOOL)a2;
- (void)onTimer:(id)a0;
- (void)onInovkeCallback:(id /* block */)a0;
- (void)mainThread_clearTimer:(unsigned int)a0;
- (void).cxx_destruct;

@end
