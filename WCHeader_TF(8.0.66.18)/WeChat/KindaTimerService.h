@class MMVoidCallback, MMTimer, NSString;

@interface KindaTimerService : NSObject <MMKTimerService>

@property (nonatomic) BOOL needThrottle;
@property (nonatomic) double m_interval;
@property (retain, nonatomic) MMVoidCallback *m_timeCheckCallback;
@property (retain, nonatomic) MMTimer *m_timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initIntervalAndCheckedCallbackImpl:(float)a0 timeCheckCallback:(id)a1;
- (void)startTimeCheck;
- (void)stopTimeCheck;
- (void)timeCheckCallback;
- (void)throttleImpl:(float)a0 handler:(id)a1;
- (void)dispatchAfterImpl:(float)a0 handle:(id)a1;
- (double)now;
- (void)dispatchAsyncInBgThreadImpl:(id)a0;
- (void)dispatchAsyncInMainThreadImpl:(id)a0;
- (void).cxx_destruct;

@end
