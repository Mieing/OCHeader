@interface FlowUIKit.FlowNavigationController : UINavigationController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ rootVC;
    void /* unknown type, empty encoding */ didDisappearBlock;
    void /* unknown type, empty encoding */ _rootVCProvider;
}

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (id)popToRootViewControllerAnimated:(BOOL)a0;

@end
