@interface FlowKit.DYVideoPlayerNavigationController : UINavigationController <UIGestureRecognizerDelegate>

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
