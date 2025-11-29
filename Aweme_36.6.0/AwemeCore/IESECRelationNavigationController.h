@interface IESECRelationNavigationController : UINavigationController

- (long long)preferredInterfaceOrientationForPresentation;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
