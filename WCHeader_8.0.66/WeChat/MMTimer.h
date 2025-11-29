@class NSTimer, NSDate;

@interface MMTimer : NSObject

@property (retain, nonatomic) NSTimer *m_timer;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) NSDate *pauseStart;
@property (retain, nonatomic) NSDate *previousFireDate;

+ (id)scheduledNoRetainTimerWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4;
+ (id)startTimeCheckWithInterval:(double)a0 target:(id)a1 selector:(SEL)a2;

- (void)dealloc;
- (void)stopTimeCheck;
- (void)invalidate;
- (void)pauseTimer;
- (void)resumeTimer;
- (void).cxx_destruct;

@end
