@class NSString;
@protocol TransitioningAnimationDelegate;

@interface LeftRightAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) id<TransitioningAnimationDelegate> delegate;
@property (nonatomic) BOOL reverse;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)animateTransition:(id)a0;
- (void)animateTransition:(id)a0 fromVC:(id)a1 toVC:(id)a2 fromView:(id)a3 toView:(id)a4;
- (void)animationEnded:(BOOL)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (void).cxx_destruct;

@end
