@class NSString, BDARViewControllerTransition;

@interface BDARNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (retain, nonatomic) BDARViewControllerTransition *transition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)initWithRootViewController:(id)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;

@end
