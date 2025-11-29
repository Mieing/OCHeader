@class NSTimer, NSHashTable;
@protocol AWEIMCountDownTimerManagerEventAction;

@interface AWEIMCountDownTimerManager : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSHashTable *eventListeners;
@property (weak, nonatomic) id<AWEIMCountDownTimerManagerEventAction> eventDelegate;

+ (id)sharedInstance;

- (double)currentServerTime;
- (void)p_startTimerIfNeed;
- (void)p_timerFired;
- (void)p_onTimerFiredWithTimerEventListener:(id)a0;
- (void)p_stopTimerIfNeed;
- (id)p_getCountDownTitleWithEndTime:(double)a0;
- (id)p_getTimeCountDownTitleWithTimerEventListener:(id)a0;
- (BOOL)p_isFinishEventWithTimerEventListener:(id)a0;
- (void)unregistWithTimerEventListener:(id)a0;
- (id)p_getCountDownTitleWithInterval:(double)a0;
- (void)registTimerFiredCallbackWithTimerEventListener:(id)a0 endTime:(double)a1;
- (id)getCountDownTitleWithEndTime:(double)a0;
- (void).cxx_destruct;
- (id)init;

@end
