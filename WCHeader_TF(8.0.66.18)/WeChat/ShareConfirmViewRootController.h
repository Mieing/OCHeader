@interface ShareConfirmViewRootController : MMUIViewController

@property (nonatomic) unsigned long long orientationMask;
@property (copy, nonatomic) id /* block */ didTransitionToNewSize;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)viewDidTransitionToNewSize;
- (void).cxx_destruct;

@end
