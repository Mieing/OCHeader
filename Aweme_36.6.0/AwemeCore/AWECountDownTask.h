@class NSTimer;

@interface AWECountDownTask : NSObject

@property (nonatomic) unsigned long long stage;
@property (nonatomic) unsigned long long timeLength;
@property (retain, nonatomic) NSTimer *taskTimer;

- (void)pauseTaskIfNeed;
- (void)resumeTaskIfNeed;
- (void)startTaskIfNeed;
- (void)startTaskTimer;
- (void)pauseTaskTimer;
- (void)resumeTaskTimer;
- (void)resetTaskTimer;
- (void)stopTaskIfNeed;
- (void)configTaskWithTimeLength:(unsigned long long)a0;
- (void)taskFire;
- (id)initWithTaskLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)reset;

@end
