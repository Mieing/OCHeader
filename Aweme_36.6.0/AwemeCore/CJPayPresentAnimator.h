@class NSString;

@interface CJPayPresentAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_isSingleHalfPageCJPayNavi:(id)a0;
- (void)p_finishTransitionWithContext:(id)a0;
- (void)p_presentViewController:(id)a0 sourceView:(id)a1 isShowMask:(BOOL)a2 completion:(id /* block */)a3;
- (void)p_presentHalfVCNewAnimationWithTransitionContext:(id)a0 fromVC:(id)a1 toVC:(id)a2 completion:(id /* block */)a3;
- (void)p_presentHalfVCWithTransitionContext:(id)a0 shareView:(id)a1 fromVC:(id)a2 toVC:(id)a3 completion:(id /* block */)a4;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)p_animateTransition:(id)a0;

@end
