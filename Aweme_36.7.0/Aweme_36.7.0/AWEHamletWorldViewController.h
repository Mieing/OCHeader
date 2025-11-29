@interface AWEHamletWorldViewController : UIViewController <DUXAlertDialogDelegate, UIViewControllerTransitioningDelegate, AWERouterViewControllerProtocol> {
    void /* unknown type, empty encoding */ engineVC;
    void /* unknown type, empty encoding */ annieXView;
    void /* unknown type, empty encoding */ loadingBackgroundView;
    void /* unknown type, empty encoding */ jokerVC;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ currentDialog;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ loadingSet;
    void /* unknown type, empty encoding */ screenshotView;
    void /* unknown type, empty encoding */ defaultSupportOrientation;
    void /* unknown type, empty encoding */ isLandscape;
    void /* unknown type, empty encoding */ supportOrientation;
}

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;

- (void)alertDialogWillDismiss:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tapAction;

@end
