@class NSString, UIPanGestureRecognizer;

@interface AWEPanelTransitionController : AWEPanelBaseTransitionController <UIGestureRecognizerDelegate>

@property (nonatomic, getter=isDismissingInteractively) BOOL dismissingInteractively;
@property (nonatomic) BOOL allowsInteractiveDismissal;
@property (nonatomic) long long presentationOrientation;
@property (readonly, nonatomic) UIPanGestureRecognizer *interactivePanGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)presentationControllerClass;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })initialFrameForPresentedViewController:(id)a0 transitionContext:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForPresentedViewController:(id)a0 transitionContext:(id)a1;
- (void)beginInteractiveDismissal;
- (struct CGPoint { double x0; double x1; })frameOriginForPresentedViewControllerInContainerView:(id)a0;
- (void)presentedViewPanned:(id)a0;
- (void)finishInteractiveTransition;
- (void).cxx_destruct;
- (void)cancelInteractiveTransition;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)interactionControllerForDismissal:(id)a0;
- (unsigned long long)transitionAnimationOptions:(id)a0;

@end
