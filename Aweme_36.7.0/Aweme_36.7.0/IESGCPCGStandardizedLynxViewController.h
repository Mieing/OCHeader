@interface IESGCPCGStandardizedLynxViewController : UIViewController

@property (nonatomic) long long orientationBeforePageShow;
@property (nonatomic) long long initialOrientation;

- (void)showWithContent:(id)a0 completion:(id /* block */)a1;
- (void)hideContainerWithCompletion:(id /* block */)a0;
- (void)_rotateToInitialOrientationIfNeeded;
- (void)_restoreOrientationIfNeeded;
- (long long)interfaceOrientationFromLynxContainerOrientation:(long long)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_isShowing;

@end
