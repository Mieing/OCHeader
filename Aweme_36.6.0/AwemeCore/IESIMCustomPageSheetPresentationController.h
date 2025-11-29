@class UIView, NSString, UITapGestureRecognizer, UIControl, IESIMCustomPageSheetPresentView, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, IESIMCustomPageSheetAccessibilityMaskView;

@interface IESIMCustomPageSheetPresentationController : UIPresentationController <UIGestureRecognizerDelegate, IESIMCustomModalTransitionContext, IESIMCustomPageSheetPresentViewDelegate>

@property (readonly, nonatomic) IESIMCustomPageSheetAccessibilityMaskView *closeMaskView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIControl *closeButton;
@property (readonly, nonatomic) UIPanGestureRecognizer *pullGesture;
@property (readonly, nonatomic) UIView *pullIndicatorView;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *_interactionControllerForDismiss;
@property (readonly, nonatomic) IESIMCustomPageSheetPresentView *internalPresentedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyPreferredContentSizeUpdate;
- (id)logTag;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__handleTapGesture:(id)a0;
- (void)__createTapGesture;
- (void)__refreshBackgroundColor;
- (void)__handleCloseButtonClicked:(id)a0;
- (id)interactionControllerForDismiss;
- (void)__createCloseButton;
- (void)__createPullGesture;
- (void)__handlePullGesture:(id)a0;
- (void)__releaseComponents;
- (void)__createPresentedView;
- (BOOL)__presentedVCUserAutoLayout;
- (id)__pageSheetViewController;
- (BOOL)enablePullGesture;
- (BOOL)enablePullIndicatorView;
- (long long)enablePullDirectionMask;
- (id)defaultContainerBackgroundColor;
- (void)notifyPreferredContentSizeUpdateForPresentedViewController;
- (void)presentViewDidLayoutSubViews:(id)a0;
- (BOOL)__useCustomHandlerForAction:(long long)a0;
- (void)__willTriggerAutoDismissByAction:(long long)a0;
- (void)__didTriggerAutoDismissByAction:(long long)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (id)presentedView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })__contentInsets;

@end
