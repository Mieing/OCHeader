@class NSString, UIViewController;

@interface AWEECTabBarCartViewController : UIViewController <AWETabBarItemViewControllerProtocol>

@property (retain, nonatomic) UIViewController *cartVC;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aIESECAppInfoServiceCommonAdapterClass;

- (id)currentTabReferString;
- (void)tabBarItemViewControllerDidSelectFromPreviousIndex:(long long)a0;
- (void)tabBarItemViewControllerDidUnselect;
- (void)tabBarItemViewControllerDidDoubleTap;
- (void)tabBarItemViewControllerDidLongPress;
- (void)setupCartVC;
- (void)buildUpUI;
- (id)aIESECAppInfoServiceCommonAdapter;
- (id)baseTrackerParams;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;

@end
