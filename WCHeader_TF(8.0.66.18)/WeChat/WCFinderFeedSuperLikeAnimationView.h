@class NSString, CADisplayLink;

@interface WCFinderFeedSuperLikeAnimationView : UIView <CAAnimationDelegate>

@property (copy, nonatomic) id /* block */ complectionBlock;
@property (nonatomic) struct CGPoint { double x; double y; } animationEndPoint;
@property (nonatomic) struct CGPoint { double x; double y; } animationStartPoint;
@property (nonatomic) struct CGPoint { double x; double y; } animationControlPoint;
@property (nonatomic) double duration;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startAnimationWithEndPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint:(struct CGPoint { double x0; double x1; })a1 complectionBlock:(id /* block */)a2;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)startDisplayLinkAnimationWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1 controlPoint:(struct CGPoint { double x0; double x1; })a2 duration:(double)a3 complectionBlock:(id /* block */)a4;
- (void)updateFrame;
- (struct CGPoint { double x0; double x1; })calculateBezierPoint:(double)a0;
- (double)easeIn:(double)a0;
- (void).cxx_destruct;

@end
