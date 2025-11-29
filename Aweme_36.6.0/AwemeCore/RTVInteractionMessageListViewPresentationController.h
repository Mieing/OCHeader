@class UIControl, UIPercentDrivenInteractiveTransition, NSString, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface RTVInteractionMessageListViewPresentationController : UIPresentationController <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIView *closeMaskView;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIControl *closeButton;
@property (readonly, nonatomic) UIPanGestureRecognizer *pullGesture;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *__interactionControllerForDismiss;
@property (retain, nonatomic) UIView *keyboardViewSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__addObserver;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)handleKeyboardHideNoti:(id)a0;
- (void)__handleTapGesture:(id)a0;
- (void)__createTapGesture;
- (void)__handleCloseButtonClicked:(id)a0;
- (void)__removeObserver;
- (id)interactionControllerForDismiss;
- (void)__createCloseButton;
- (void)__createPullGesture;
- (id)__fullScreenViewController;
- (void)__handlePullGesture:(id)a0;
- (void)__releaseComponents;
- (void).cxx_destruct;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dismissalTransitionDidEnd:(BOOL)a0;
- (id)initWithPresentedViewController:(id)a0 presentingViewController:(id)a1;
- (void)dealloc;

@end
