@class CADisplayLink;

@interface IESGCPValueAnimator : NSObject

@property (nonatomic) double duration;
@property (weak, nonatomic) CADisplayLink *link;
@property (nonatomic) long long totalTimes;
@property (nonatomic) long long times;
@property (nonatomic) double piece;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (copy, nonatomic) id /* block */ onAnimated;
@property (copy, nonatomic) id /* block */ onFinished;

- (void)runDisplayLink:(id)a0;
- (void).cxx_destruct;
- (id)initWithDuration:(double)a0;
- (void)stop;
- (void)start;

@end
