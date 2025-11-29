@class NSString, BDPUniqueID;

@interface BDPAppVideoViewNavigationController : UINavigationController <UINavigationControllerDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;

@end
