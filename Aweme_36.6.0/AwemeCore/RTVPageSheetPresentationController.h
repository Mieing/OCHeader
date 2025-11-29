@class UIView, RTVPageSheetPresentView, UITapGestureRecognizer, NSString, UIControl, RTVPageSheetAccessibilityMaskView, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition, UILabel;
@protocol RxInjector;

@interface RTVPageSheetPresentationController : UIPresentationController <UIGestureRecognizerDelegate>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) RTVPageSheetAccessibilityMaskView *closeMaskView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIControl *closeButton;
@property (readonly, nonatomic) UIPanGestureRecognizer *pullGesture;
@property (readonly, nonatomic) UIView *pullIndicatorView;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *_interactionControllerForDismiss;
@property (readonly, nonatomic) RTVPageSheetPresentView *internalPresentedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void)__createTitleLabel;
- (BOOL)enablePullGesture;
- (BOOL)enablePullIndicatorView;
- (long long)enablePullDirectionMask;
- (id)defaultContainerBackgroundColor;
- (void)notifyPreferredContentSizeUpdateForPresentedViewController;
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
