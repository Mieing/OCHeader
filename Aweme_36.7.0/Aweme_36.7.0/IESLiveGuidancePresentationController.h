@class UIView;

@interface IESLiveGuidancePresentationController : UIPresentationController

@property (retain, nonatomic) UIView *dimmingView;

+ (void)showFromViewController:(id)a0 shownViewController:(id)a1;

- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)dimmingViewTapped:(id)a0;

@end
