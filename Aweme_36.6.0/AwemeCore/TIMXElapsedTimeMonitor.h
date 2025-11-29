@class NSMutableDictionary, TIMXSDKInstance, NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, TIMXElapsedTimeMonitorDelegate;

@interface TIMXElapsedTimeMonitor : NSObject <TIMXElapsedTimeMonitorProtocol>

@property (weak, nonatomic) TIMXSDKInstance *r;
@property (nonatomic) double timeoutTime;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSMutableDictionary *foregroundTskDict;
@property (retain, nonatomic) NSMutableDictionary *backgroundTaskDict;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic) BOOL isForeground;
@property (nonatomic) BOOL timerIsResume;
@property (nonatomic) double timeoutTimeInMilliseconds;
@property (weak, nonatomic) id<TIMXElapsedTimeMonitorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resumeTimerIfNeeded;
- (void)setupTimerIfNeeded;
- (id)startTaskWithContext:(id)a0 taskId:(id)a1 caller:(Class)a2 function:(SEL)a3 line:(long long)a4;
- (void)checkTimeoutTask;
- (void)checkTimeoutTaskCore;
- (void)finishTaskWithTaskId:(id)a0;
- (id)initWithRootObject:(id)a0 timeoutTime:(double)a1 type:(unsigned long long)a2;
- (void)suspendTimerIfNeeded;
- (void)stopTimer;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
