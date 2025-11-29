@class UIView;

@interface AWESearchScanHistoryBottomPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *backgroundView;

- (void)backgroundTapped;
- (void).cxx_destruct;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;

@end
