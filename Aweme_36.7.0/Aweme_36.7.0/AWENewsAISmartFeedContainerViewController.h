@class DUXTabBarContainerController, NSArray, NSString, AWENewsAISmartFeedContainerViewModel, DUXTabBar;

@interface AWENewsAISmartFeedContainerViewController : UIViewController <DUXTabBarContainerDelegate>

@property (retain, nonatomic) AWENewsAISmartFeedContainerViewModel *viewModel;
@property (retain, nonatomic) DUXTabBar *subTabBar;
@property (retain, nonatomic) DUXTabBarContainerController *subTabContainer;
@property (copy, nonatomic) NSArray *subTabVCs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (id)currentFeedVC;
- (void)p_configUI;
- (void)p_makeConstraint;
- (void)p_configSubTabs;
- (id)p_getFeedVCWithTabConfig:(id)a0;
- (id)p_getTabBarItems;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;

@end
