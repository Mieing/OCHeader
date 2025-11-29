@class UIView;

@interface DUXSheetPresentationController : UIPresentationController

@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIView *presentedWrappingView;

- (void)adjustPresentedViewHeight:(double)a0 withUserInteraction:(BOOL)a1;
- (void)addTopCornerToPresentedView;
- (void)addDimmingViewToContainerView;
- (void)addPresentedWrappingViewToContainerView;
- (void)adjustPresentedViewYOffset:(double)a0 withUserInteraction:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (id)presentedView;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)containerViewDidLayoutSubviews;
- (void)dimmingViewTapped:(id)a0;

@end
