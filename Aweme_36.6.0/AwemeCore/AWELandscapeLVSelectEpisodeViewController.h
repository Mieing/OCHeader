@class AWEAwemeModel, UIView, AWELandscapeLongVideoNetworkErrorView, DUXTabBarContainerController, NSArray, DUXTabBar, AWEUILoadingView, AWELandscapeLVPaymentTagView, NSString, AWELandscapeFeedViewModel, AWELandscapePageContext, AWELandscapeLVSelectEpisodeDataController;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeLVSelectEpisodeViewController : UIViewController <DUXTabBarContainerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *containerEffectView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) DUXTabBar *tabBar;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIView *tabContainerView;
@property (retain, nonatomic) DUXTabBarContainerController *tabContainerController;
@property (retain, nonatomic) UIView *networkErrorContainerView;
@property (retain, nonatomic) UIView *networkErrorEffectView;
@property (retain, nonatomic) AWELandscapeLongVideoNetworkErrorView *networkErrorView;
@property (retain, nonatomic) UIView *loadingContainerView;
@property (retain, nonatomic) UIView *loadingContainerEffectView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWELandscapeFeedViewModel *viewModel;
@property (retain, nonatomic) AWELandscapeLVSelectEpisodeDataController *splitDataController;
@property (copy, nonatomic) NSArray *tabsArray;
@property (retain, nonatomic) AWELandscapeLVPaymentTagView *selectTitleContainerView;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1 transitionType:(long long)a2;
- (void)dismissLoadingView;
- (id)initWithPageContext:(id)a0;
- (void)setupRefreshBlock;
- (void)updateWithViewModel:(id)a0 currentModel:(id)a1;
- (void)dismissNetworkErrorView;
- (void)showNetworkErrorView;
- (void)didTapNetworkRetryButton;
- (void)trackSegmentPanelFilterShow;
- (void)setupTabBar;
- (void)setupTabVC;
- (id)tabBarTitle;
- (id)tabBarSubTitle;
- (void)updateTabBarSubTitle;
- (void)finishRefreshWithError:(id)a0;
- (void)trackSelectLanguage;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)showLoadingView;
- (void)resetUI;

@end
