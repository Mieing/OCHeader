@class NSString, DUXTabBarContainerController, AWENewsAISmartTabBar, NSArray, AWENewsAISmartHeaderView, AWENewsAISmartViewModel, AWENewsAISmartBackgroundView, AWENewsAISmartContainerScrollView, AWENewsAISmartExitButton;

@interface AWENewsAISmartViewController : UIViewController <AWERouterViewControllerProtocol, DUXTabBarContainerDelegate, AWECommonFeedDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) AWENewsAISmartViewModel *viewModel;
@property (retain, nonatomic) AWENewsAISmartBackgroundView *backgroundView;
@property (retain, nonatomic) AWENewsAISmartContainerScrollView *containerScrollView;
@property (retain, nonatomic) AWENewsAISmartHeaderView *headerView;
@property (retain, nonatomic) AWENewsAISmartExitButton *exitButton;
@property (retain, nonatomic) AWENewsAISmartTabBar *maiTabBar;
@property (retain, nonatomic) DUXTabBarContainerController *mainTabContainer;
@property (copy, nonatomic) NSArray *mainTabVCs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (id)currentFeedContainer;
- (id)currentFeedVC;
- (BOOL)shouldContainerScroll;
- (void)contentScrollViewDidScroll:(id)a0;
- (void)p_configUI;
- (void)p_setScrollViewOffset:(double)a0 scrollView:(id)a1;
- (void)p_makeConstraint;
- (id)p_getTabBarItems;
- (void)p_configViewModel;
- (id)currentContentScrollView;
- (void)p_configMainTabs;
- (id)p_getFeedContainerVCWithViewModel:(id)a0;
- (void)p_exitNewsAISmartPage;
- (double)p_getStickThreshold;
- (void)p_changeContainerScrollViewOffsetWithScrollView:(id)a0;
- (void)p_changeContentScrollViewOffsetWithScrollView:(id)a0;
- (void)p_refreshCurrTab;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
