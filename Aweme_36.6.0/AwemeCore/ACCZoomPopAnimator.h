@class NSString, UIView;
@protocol UIViewControllerContextTransitioning;

@interface ACCZoomPopAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIView *startViewSnapshot;
@property (retain, nonatomic) UIView *endViewSnapshot;
@property (retain, nonatomic) UIView *endView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (nonatomic) BOOL interactionInProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)progressForCurrentPosition:(struct CGPoint { double x0; double x1; })a0 startPosition:(struct CGPoint { double x0; double x1; })a1;
- (void)updateAnimationWithLocation:(struct CGPoint { double x0; double x1; })a0 startLocation:(struct CGPoint { double x0; double x1; })a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)finishAnimation;
- (void)cancelAnimation;

@end
