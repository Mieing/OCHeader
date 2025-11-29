@class NSString, UIViewController;

@interface MMUINavigationController : UINavigationController <UINavigationControllerDelegate> {
    UIViewController *_popingViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (BOOL)shouldInteractivePop;
- (id)DispatchPopViewControllerAnimated:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void)setNavigationBarHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)disMissSelf;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;

@end
