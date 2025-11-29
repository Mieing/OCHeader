@class NSString;

@interface DUXAlertDialogPresentTransitioningAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)opacityAnimateDuration:(id)a0;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;

@end
