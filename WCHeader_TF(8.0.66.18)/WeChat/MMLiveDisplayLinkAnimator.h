@class CADisplayLink;

@interface MMLiveDisplayLinkAnimator : NSObject

@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ animation;
@property (copy, nonatomic) id /* block */ completed;
@property (nonatomic) double startTime;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL useHighFrameRate;

- (id)initWithDuration:(double)a0 animationBlock:(id /* block */)a1 completedBlock:(id /* block */)a2;
- (void)start;
- (void)stop;
- (void)animateWithDisplayLink:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
