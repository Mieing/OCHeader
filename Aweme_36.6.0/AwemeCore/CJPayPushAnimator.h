@class NSString;

@interface CJPayPushAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_finishTransitionWithContext:(id)a0;
- (void)p_pushWithTransitionContext:(id)a0 shareView:(id)a1;
- (void)p_insertBackViewWithShareView:(id)a0 snapImage:(id)a1;
- (BOOL)p_isNeedInsertSnapshotForVC:(id)a0;
- (void)p_pushHalfVCNewAnimationWithTransitionContext:(id)a0 fromVC:(id)a1 toVC:(id)a2 completion:(id /* block */)a3;
- (void)p_pushHalfVCWithTransitionContext:(id)a0 shareView:(id)a1 fromVC:(id)a2 toVC:(id)a3 completion:(id /* block */)a4;
- (BOOL)p_isAllHalfPageInNavi:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
