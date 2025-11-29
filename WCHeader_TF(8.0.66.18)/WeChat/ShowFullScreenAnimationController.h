@class NSString;
@protocol TransitioningAnimationDelegate;

@interface ShowFullScreenAnimationController : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>

@property (weak, nonatomic) id<TransitioningAnimationDelegate> delegate;
@property (nonatomic) double duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rcOriginFrame;
@property (nonatomic) BOOL navControllerWrapped;
@property (nonatomic) BOOL shouldUpdateFromViewWhenEnter;
@property (nonatomic) BOOL shouldForwardLifecycleEvent;
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
