@interface LarkSSO.PortaitNavigationController : UINavigationController

@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) long long preferredInterfaceOrientationForPresentation;

- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithRootViewController:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
