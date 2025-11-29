@class UIViewController;

@interface FlowUIKit.FlowHalfScreenPresentationViewController : UIViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ contentViewController;
    void /* unknown type, empty encoding */ appearanceDelegate;
    void /* unknown type, empty encoding */ customPresentationStyle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dimmingView;
    void /* unknown type, empty encoding */ interactiveDismissal;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapDismissGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panDismissGesture;
    void /* unknown type, empty encoding */ interactiveAnimator;
    void /* unknown type, empty encoding */ standalone;
}

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;

- (void).cxx_destruct;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (void)dimmingViewTapped:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
