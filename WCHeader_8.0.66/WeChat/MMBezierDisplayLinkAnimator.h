@class CADisplayLink;

@interface MMBezierDisplayLinkAnimator : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint1;
@property (nonatomic) struct CGPoint { double x; double y; } controlPoint2;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completeHandler;
@property (copy, nonatomic) id /* block */ animator;
@property (nonatomic) double beginValue;
@property (nonatomic) double endValue;

- (id)initWithDuration:(double)a0;
- (void)addProgressCallback:(id /* block */)a0;
- (void)addCompleteCallback:(id /* block */)a0;
- (void)addUIViewAnimator:(id /* block */)a0;
- (void)setBezierCurveWithTimingFunction:(id)a0;
- (void)setBezierCurveWithControlPoint1:(struct CGPoint { double x0; double x1; })a0 controlPoint2:(struct CGPoint { double x0; double x1; })a1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)updateAnimation;
- (double)cubicBezier:(double)a0 c1x:(double)a1 c1y:(double)a2 c2x:(double)a3 c2y:(double)a4;
- (void).cxx_destruct;

@end
