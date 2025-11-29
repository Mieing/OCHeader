@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface IESLLPendantTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic) double accumulatedTime;
@property (nonatomic) double lastPauseTime;
@property (nonatomic) BOOL isTimerRunning;
@property (nonatomic) BOOL isTimerPaused;

- (void).cxx_destruct;
- (void)timerFired;
- (void)startTimer;
- (id)init;
- (void)invalidateTimer;
- (void)pauseTimer;
- (void)resumeTimer;

@end
