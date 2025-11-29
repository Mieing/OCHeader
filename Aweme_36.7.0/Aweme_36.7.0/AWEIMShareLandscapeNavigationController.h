@class AWEPanelTransitionController, CAGradientLayer, NSString, UIViewController;

@interface AWEIMShareLandscapeNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (retain, nonatomic) AWEPanelTransitionController *transitionController;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) UIViewController *targetVC;
@property (nonatomic) unsigned long long landscapeStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_setup;
- (id)initWithRootViewController:(id)a0 targetVC:(id)a1;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
