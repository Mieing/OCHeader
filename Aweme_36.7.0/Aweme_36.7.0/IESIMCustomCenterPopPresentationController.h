@class IESIMCustomCenterPopPresentView, IESIMCustomCenterPopAccessibilityMaskView, UIControl, NSString, UITapGestureRecognizer;

@interface IESIMCustomCenterPopPresentationController : UIPresentationController <UIGestureRecognizerDelegate, IESIMCustomCenterPopPresentViewDelegate>

@property (retain, nonatomic) IESIMCustomCenterPopPresentView *customPresentView;
@property (retain, nonatomic) IESIMCustomCenterPopAccessibilityMaskView *closeMaskView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIControl *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)p_handleTapGesture:(id)a0;
- (void)p_handleCloseButtonClicked:(id)a0;
- (void)p_refreshBackgroundColor;
- (id)p_centerPopViewController;
- (id)p_defaultContainerBackgroundColor;
- (void)p_createTapGesture;
- (void)p_createCloseButton;
- (BOOL)p_useCustomHandlerForAction:(long long)a0;
- (void)p_willTriggerAutoDismissByAction:(long long)a0;
- (void)p_didTriggerAutoDismissByAction:(long long)a0;
- (void)presentViewDidLayoutSubViews:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (id)presentedView;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)containerViewDidLayoutSubviews;

@end
