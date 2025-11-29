@class AWEListenFeedPlayListHeaderView, AWEListenFeedCollectionListViewController, AWEListenFeedPlayListContainerConfig, DUXTabBarContainerController, DUXTabBar, AWEListenFeedContext, NSString, AWEListenFeedPlayListViewController;
@protocol AWEListenFeedPlayListContainerViewControllerDelegate;

@interface AWEListenFeedPlayListContainerViewController : UIViewController <DUXTabBarContainerDelegate>

@property (retain, nonatomic) AWEListenFeedPlayListHeaderView *headerView;
@property (retain, nonatomic) AWEListenFeedCollectionListViewController *collectionVC;
@property (retain, nonatomic) AWEListenFeedPlayListViewController *playlistVC;
@property (retain, nonatomic) DUXTabBarContainerController *tabBarContainer;
@property (retain, nonatomic) DUXTabBar *tabBar;
@property (readonly, nonatomic) AWEListenFeedContext *context;
@property (nonatomic) BOOL enableEnhanceCollect;
@property (retain, nonatomic) AWEListenFeedPlayListContainerConfig *config;
@property (weak, nonatomic) id<AWEListenFeedPlayListContainerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (id)dux_sheetScrollView;
- (void)updateUIToPauseState;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)setUpUI;

@end
