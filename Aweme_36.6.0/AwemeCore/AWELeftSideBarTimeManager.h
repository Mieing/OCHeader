@class NSTimer, NSDate;

@interface AWELeftSideBarTimeManager : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double targetTriggerTime;
@property (nonatomic) BOOL isTriggerTimer;
@property (retain, nonatomic) NSDate *pauseStart;
@property (retain, nonatomic) NSDate *previousFireDate;

- (void)handleBecomeActive;
- (void)handleResignActive;
- (double)getCurrentServerTime;
- (BOOL)needLoadPresenter:(double)a0 endTime:(double)a1;
- (BOOL)checkWhetherTheCurrentTimeIsInRangeWithStartTime:(double)a0 endTime:(double)a1;
- (void)checkWhetherTheCurrentTimeNeedMonitorWithStartTime:(double)a0 endTime:(double)a1 startBlock:(id /* block */)a2 endBlock:(id /* block */)a3;
- (void)startTimerWithDuration:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;
- (void)startTimerWithTriggerTime:(double)a0 block:(id /* block */)a1;
- (double)zeroOfTimeInterval:(double)a0;
- (double)diffZeroOfTimeInterval;
- (void)checkWithStartTime:(double)a0 withEndTime:(double)a1 willStartBlock:(id /* block */)a2 processingBlock:(id /* block */)a3 endedBlock:(id /* block */)a4 errorBlock:(id /* block */)a5;
- (BOOL)isInCurrentTimePeriodWithStartTimeInterval:(double)a0 endTimeInterval:(double)a1;
- (void)stopTimer;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
