@class AWEDetailNewStyleShootButton, AWEDetailPropTracker, AWEDetailPropViewModel, DUXNavigationBar, DUXTabBar, DUXTabBarContainerController, NSArray, AWEDetailPropRankingListModel, DUXButton, NSString, IESServiceProvider;

@interface AWEDetailPropRankingViewController : UIViewController <DUXTabBarContainerDelegate>

@property (retain, nonatomic) IESServiceProvider *serviceProvider;
@property (retain, nonatomic) AWEDetailPropViewModel *stateContext;
@property (retain, nonatomic) AWEDetailPropTracker *propTracker;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) DUXNavigationBar *naviBar;
@property (retain, nonatomic) DUXTabBar *tabBar;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (retain, nonatomic) DUXButton *jumpAllButton;
@property (retain, nonatomic) NSArray *rankingListVCs;
@property (retain, nonatomic) NSArray *tabItems;
@property (retain, nonatomic) AWEDetailPropRankingListModel *listModel;
@property (retain, nonatomic) AWEDetailNewStyleShootButton *actionButton;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) long long lastTabIndex;
@property (nonatomic) long long maxShow;
@property (nonatomic) long long beginFetchIndex;
@property (copy, nonatomic) id /* block */ didSwitchTabBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (id)tabBarContainerGestures;
- (double)calculateTotalHeightForInlineStyle;
- (void)configData:(id)a0;
- (id)initWithServiceProvider:(id)a0 style:(unsigned long long)a1;
- (void)doWhenFirstAppear;
- (double)maxListHeightForInlineStyle;
- (void)setupTabs;
- (void)jumpToAllPage;
- (void)shootSame:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (void)updateUI;
- (void)themeDidChange;

@end
