@class NSTimer, NSString, NSDate;

@interface BUTimer : NSObject

@property (nonatomic) double timeInterval;
@property (nonatomic) double leftTimeInterval;
@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSDate *pauseDate;
@property (nonatomic) BOOL isPaused;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) NSString *runLoopMode;

+ (id)timerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 repeats:(BOOL)a3;
+ (id)timerWithTimeInterval:(double)a0 repeats:(BOOL)a1 block:(id /* block */)a2;

- (BOOL)scheduleNow;
- (BOOL)resumeFromPauseTime;
- (void).cxx_destruct;
- (BOOL)pause;
- (BOOL)isScheduled;
- (void)invalidate;
- (BOOL)isValid;
- (BOOL)resume;
- (void)dealloc;
- (double)initialTimeInterval;
- (void)timerDidFire;

@end
