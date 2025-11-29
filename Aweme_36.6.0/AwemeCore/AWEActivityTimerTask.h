@class NSTimer, NSString;

@interface AWEActivityTimerTask : NSObject <AWEFeedActivityTimerTaskProtocol>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double timeInterval;
@property (nonatomic) BOOL shouldRepeat;
@property (copy, nonatomic) id /* block */ fireBlock;
@property (retain, nonatomic) NSTimer *taskTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseTaskIfNeed;
- (void)resumeTaskIfNeed;
- (void)startTaskIfNeed;
- (id)initWithTimerInterval:(double)a0 fireBlock:(id /* block */)a1;
- (void)startTaskTimer;
- (void)pauseTaskTimer;
- (void)resumeTaskTimer;
- (void)resetTaskTimer;
- (void)taskFire:(id)a0;
- (id)initWithTimerInterval:(double)a0 shouldRepeat:(BOOL)a1 fireBlock:(id /* block */)a2;
- (void)stopTaskIfNeed;
- (void).cxx_destruct;
- (void)reset;

@end
