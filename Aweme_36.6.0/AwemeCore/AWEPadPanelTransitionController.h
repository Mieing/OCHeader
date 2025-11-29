@class NSString, UIViewController, UIView;

@interface AWEPadPanelTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>

@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) double presentationTransitionDuration;
@property (nonatomic) double dismissalTransitionDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)presentationControllerClass;

- (void)animatePresentationTransition:(id)a0;
- (void)animateDismissalTransition:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPresentedViewController:(id)a0 transitionContext:(id)a1;
- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (unsigned long long)transitionAnimationOptions:(id)a0;

@end
