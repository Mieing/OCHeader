@class NSString;

@interface RTVInteractionMessageListViewControllerTransitioningAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimateTransition:(id)a0;
- (void)presentAnimateTransition:(id)a0;
- (id)__fullScreenViewControllerWithContext:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
