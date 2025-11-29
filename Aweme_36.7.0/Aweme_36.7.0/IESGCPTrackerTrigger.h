@class NSTimer;

@interface IESGCPTrackerTrigger : NSObject {
    struct __CFRunLoopObserver { } *_observerRef;
}

@property (nonatomic) BOOL defaultRunloopEnable;
@property (nonatomic) BOOL trackingTimerEnable;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) id /* block */ triggerBlock;
@property (nonatomic) double triggerInterval;

- (void)startRunloop;
- (void)timerTrigger;
- (id)initWithDefaultRunloopEnable:(BOOL)a0 trackingTimerEnable:(BOOL)a1;
- (void)stopRunloop;
- (void)runloopTrigger;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
