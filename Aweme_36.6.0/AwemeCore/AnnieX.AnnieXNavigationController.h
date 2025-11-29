@class UIViewController;

@interface AnnieX.AnnieXNavigationController : UINavigationController

@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;

- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
