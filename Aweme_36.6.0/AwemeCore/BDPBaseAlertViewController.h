@class UIWindow, BDPAlertSpringAnimator, UIView, UIViewController;

@interface BDPBaseAlertViewController : UIViewController

@property (weak, nonatomic) UIViewController *myParentViewController;
@property (retain, nonatomic) BDPAlertSpringAnimator *animator;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIWindow *myWindow;
@property (nonatomic) BOOL myShouldAutorotate;
@property (nonatomic) unsigned long long supportOrientations;
@property (readonly, nonatomic) long long alertStyle;

- (void)showFromParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissFromParentAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showFromParentViewController:(id)a0 animated:(BOOL)a1 animatorType:(long long)a2 completion:(id /* block */)a3;
- (void)dismissFromParentAnimated:(BOOL)a0 animatorType:(long long)a1 completion:(id /* block */)a2;
- (void)safeShowFromParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)alertView;
- (void)viewWillLayoutSubviews;

@end
