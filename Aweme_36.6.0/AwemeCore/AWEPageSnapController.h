@class UIScrollView, UIViewPropertyAnimator, CADisplayLink;
@protocol AWEPageSnapControllerDelegate;

@interface AWEPageSnapController : NSObject {
    struct { unsigned char scrollViewWillBeginDecelerating : 1; unsigned char scrollViewDidEndDecelerating : 1; unsigned char scrollViewDidScroll : 1; } _delegateCan;
    void /* function */ *_curveFunction;
}

@property (weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double beginTime;
@property (nonatomic) struct CGPoint { double x; double y; } beginContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } endContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } deviateEndContentOffset;
@property (retain, nonatomic) CADisplayLink *scrollTimer;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (nonatomic) BOOL isUIAnimationQueued;
@property (nonatomic) BOOL isUIAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } expectContentOffset;
@property (nonatomic) BOOL autoAdaptContentOffset;
@property (nonatomic) BOOL lockContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } bezierControlPoint1;
@property (nonatomic) struct CGPoint { double x; double y; } bezierControlPoint2;
@property (nonatomic) double animationDuration;
@property (nonatomic) unsigned long long animationCurve;
@property (nonatomic) double velocityThresholdX;
@property (nonatomic) double velocityThresholdY;
@property (nonatomic) double preSlideDistance;
@property (nonatomic) double nextSlideDistance;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) id<AWEPageSnapControllerDelegate> delegate;

- (void)startAnimatingWithVelocity:(struct CGPoint { double x0; double x1; })a0 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (struct CGPoint { double x0; double x1; })targetContentOffsetWithScrollingVelocity:(struct CGPoint { double x0; double x1; })a0;
- (void)swizzleScrollView:(id)a0;
- (void)unswizzleScrollView:(id)a0;
- (id)initWithScrollView:(id)a0 autoAdaptContentOffset:(BOOL)a1;
- (void)configCubicBezierWithControlPoints:(double)a0 :(double)a1 :(double)a2 :(double)a3;
- (void)cancelScrollAnimation:(BOOL)a0;
- (void)startAnimatingWithTargetContentOffset:(struct CGPoint { double x0; double x1; })a0 triggerDelegateCallback:(BOOL)a1;
- (void)startScrollAnimation:(BOOL)a0;
- (void)updateScrollAnimation:(id)a0;
- (void)startScrollAnimationByUIAnimation;
- (void)cancelScrollAnimation;
- (id)viewToDisableUserInteractionInAnimation;
- (void)finishScrollAnimationByUIAnimationWithUnlockBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithScrollView:(id)a0;
- (id)options;
- (void)dealloc;

@end
