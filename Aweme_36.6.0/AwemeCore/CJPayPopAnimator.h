@class NSString, CJPayNavigationController, UIView;
@protocol UIViewControllerContextTransitioning;

@interface CJPayPopAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> interactiveContext;
@property (weak, nonatomic) UIView *interactiveMaskView;
@property (nonatomic) BOOL isInteractive;
@property (weak, nonatomic) CJPayNavigationController *naviViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_finishTransitionWithContext:(id)a0;
- (void)p_popWithTransitionContext:(id)a0 shareView:(id)a1;
- (void)p_popHalfVCNewAnimationWithTransitionContext:(id)a0 fromVC:(id)a1 toVC:(id)a2 completion:(id /* block */)a3;
- (void)p_popHalfVCWithTransitionContext:(id)a0 fromVC:(id)a1 toVC:(id)a2 completion:(id /* block */)a3;
- (void)p_popPopUpVCWithShareView:(id)a0 transitionContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)p_navHasFullPageVC:(id)a0;
- (void)finishInteractiveTransition;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)a0;
- (void)startInteractiveTransition:(id)a0;
- (void)handleGesture:(id)a0;

@end
