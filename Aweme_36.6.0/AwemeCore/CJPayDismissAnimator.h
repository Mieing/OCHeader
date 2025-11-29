@class NSString, CJPayNavigationController, UIView;
@protocol UIViewControllerContextTransitioning;

@interface CJPayDismissAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) id<UIViewControllerContextTransitioning> transitionContext;
@property (weak, nonatomic) UIView *interactiveMaskView;
@property (nonatomic) BOOL isInteractive;
@property (weak, nonatomic) CJPayNavigationController *naviViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeViewControllerFromParentVC:(id)a0;
- (BOOL)p_isSingleHalfPageCJPayNavi:(id)a0;
- (void)p_finishTransitionWithContext:(id)a0;
- (void)p_dismissNaviController:(id)a0 withShareViews:(id)a1 transition:(id)a2 completion:(id /* block */)a3;
- (void)p_dismissHalfVCNewAnimationWithTransitionContext:(id)a0 shareViews:(id)a1 fromVC:(id)a2 toVC:(id)a3 completion:(id /* block */)a4;
- (void)p_dismissHalfVCWithTransitionContext:(id)a0 shareViews:(id)a1 fromVC:(id)a2 toVC:(id)a3 completion:(id /* block */)a4;
- (void)p_dismissViewController:(id)a0 shareViews:(id)a1 isShowMask:(BOOL)a2 completion:(id /* block */)a3;
- (id)disappearingViewControllerString;
- (void)p_forceDismissHalfVC:(id)a0 maskContainerView:(id)a1 completion:(id /* block */)a2;
- (id)p_needExitVCWithCJPayNavigationController:(id)a0;
- (void)p_dismissNaviWithOneViewController:(id)a0 shareViews:(id)a1 transition:(id)a2 completion:(id /* block */)a3;
- (void)p_dismissNaviWithMultiViewController:(id)a0 shareViews:(id)a1 transition:(id)a2 completion:(id /* block */)a3;
- (void)finishInteractiveTransition;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)a0;
- (void)startInteractiveTransition:(id)a0;
- (void)handleGesture:(id)a0;
- (void)p_animateTransition:(id)a0;

@end
