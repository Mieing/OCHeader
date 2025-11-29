@interface BDSCBaseViewController : UIViewController

@property (nonatomic) unsigned long long supportedOrientations;

- (BOOL)ttHideNavigationBar;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dismissSelf;

@end
