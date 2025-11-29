@interface FlowKitBizUI.FullScreenPresentationController : UIPresentationController

@property (nonatomic, readonly) BOOL shouldRemovePresentersView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfPresentedViewInContainerView;

- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;

@end
