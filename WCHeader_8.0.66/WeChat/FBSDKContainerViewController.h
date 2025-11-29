@protocol FBSDKContainerViewControllerDelegate;

@interface FBSDKContainerViewController : UIViewController

@property (weak, nonatomic) id<FBSDKContainerViewControllerDelegate> delegate;

- (void)viewDidDisappear:(BOOL)a0;
- (void)displayChildController:(id)a0;
- (void).cxx_destruct;

@end
