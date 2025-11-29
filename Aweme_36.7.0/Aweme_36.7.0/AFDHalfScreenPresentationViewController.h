@class UIView, NSString, UITapGestureRecognizer, UIViewPropertyAnimator, UIPanGestureRecognizer, UIViewController, NSObject, UIScrollView;
@protocol AFDHalfScreenPresentationProtocol, AFDHalfScreenDelegate;

@interface AFDHalfScreenPresentationViewController : UIViewController <UIGestureRecognizerDelegate, AFDHalfScreenHostViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<AFDHalfScreenPresentationProtocol> *contentViewController;
@property (readonly, nonatomic) UIScrollView *contentScrollView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameOfContentView;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) BOOL interactiveDismissal;
@property (retain, nonatomic) UITapGestureRecognizer *tapDismissGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panDismissGesture;
@property (retain, nonatomic) UIViewPropertyAnimator *interactiveAnimator;
@property (nonatomic) BOOL standalone;
@property (weak, nonatomic) NSObject<AFDHalfScreenDelegate> *appearanceDelegate;
@property (nonatomic) long long customPresentationStyle;
@property (nonatomic) BOOL awe_shouldBypassPresentationHook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)dimmingViewAlpha;
- (double)halfScreenCornerRadius;
- (void)presentHalfScreenAnimated:(BOOL)a0 presentingViewController:(id)a1 completion:(id /* block */)a2;
- (void)dismissHalfScreenAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)contentViewControllerDidInitialize;
- (void)updateDimmingViewAccessibilityFrame;
- (void)addChildContentViewController;
- (void)presentationAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)addToParentViewController:(id)a0 completion:(id /* block */)a1;
- (void)removeChildContentViewController;
- (void)removeWithCompletion:(id /* block */)a0;
- (void)dismissAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)dismissInteractiveWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)childViewControllerForStatusBarStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (void)setupCornerRadius;
- (void)dimmingViewTapped:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
