@class CADisplayLink;

@interface CustomAnimator : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startTime;
@property (nonatomic) double pausedTime;
@property (nonatomic) BOOL isPaused;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) double duration;
@property (nonatomic) double delay;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (id)initWithDuration:(double)a0;
- (void)startAnimation;
- (void)updateAnimation;
- (void)stopAnimation;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (double)easeInOut:(double)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
