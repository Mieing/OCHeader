@class UIViewPropertyAnimator, NSString, UIPanGestureRecognizer;

@interface MMLiteAppModalTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (nonatomic) unsigned long long panGestureType;
@property (nonatomic) unsigned long long transitionType;
@property (nonatomic) double velocityThreshold;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentedFinianFrame;
@property (copy, nonatomic) id /* block */ transitionComplete;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForPresentedView:(id)a0;
- (void)setupAnimatorForTransition:(id)a0;
- (void)animateTransition:(id)a0;
- (void)animationEnded:(BOOL)a0;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (BOOL)wantsInteractiveStart;
- (void)setPanGesture:(id)a0 forType:(unsigned long long)a1;
- (void)handlePanGesture:(id)a0;
- (void).cxx_destruct;

@end
