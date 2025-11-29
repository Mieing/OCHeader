@class UIView, NSString, AWEHotSearchCommentContainerHeaderView, AWEHotSearchCommentFeedPageContext, AWEHotSearchCommentNavigationBar, AWEHotSearchCommentAISummaryFeedViewController, CustomScrollView, AWEHotSearchCommentNestedDiscussionViewController, AWESlidingViewController;
@protocol AWECommentInputViewManagerProtocol;

@interface AWEHotSearchCommentContainerViewControllerV2 : UIViewController <UIScrollViewDelegate, AWESlidingViewControllerDelegate, AWECommonFeedDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEHotSearchCommentNavigationBar *navView;
@property (retain, nonatomic) UIView *returnView;
@property (retain, nonatomic) CustomScrollView *containerScrollView;
@property (retain, nonatomic) AWEHotSearchCommentContainerHeaderView *headerView;
@property (retain, nonatomic) AWESlidingViewController *contentSlidingVC;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (nonatomic) unsigned long long feedViewControllerState;
@property (nonatomic) unsigned long long latestFeedViewControllerState;
@property (retain, nonatomic) AWEHotSearchCommentFeedPageContext *context;
@property (retain, nonatomic) AWEHotSearchCommentNestedDiscussionViewController *nestedDiscussionVC;
@property (retain, nonatomic) AWEHotSearchCommentAISummaryFeedViewController *aiSummaryFeedVC;
@property (nonatomic) long long scrollState;
@property (nonatomic) float feedContentScrollViewLastOffset;
@property (nonatomic) float containerLastOffset;
@property (nonatomic) double enterPageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)referString;
+ (void)customPushViewController:(id)a0 viewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
+ (id)serviceId;

- (BOOL)configWithRouterParamDict:(id)a0;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2 transitionType:(long long)a3;
- (void)p_addObserver;
- (void)slidingViewController:(id)a0 willFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2 transitionType:(long long)a3;
- (void)scrollViewSetContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)containerScrollHeaderUp;
- (BOOL)shouldContainerScroll;
- (void)contentScrollViewDidScroll:(id)a0;
- (void)p_configUI;
- (BOOL)p_enableCompatibleSearchDiscussionsTab;
- (void)p_prepareTabs;
- (void)p_resetContainerScrollViewContentSizeUseDefault:(BOOL)a0;
- (void)p_updateCommentInputViewUIThemeIfNeeded;
- (double)p_criticalOffset;
- (void)p_switchOuterTabType:(long long)a0;
- (id)p_commentContextWithHotSpotID:(id)a0;
- (void)p_toggleDiscussIsEmpty:(BOOL)a0;
- (void)p_toggleSlidingVCSlideEnable:(BOOL)a0;
- (id)p_getCurrentCommentFeedVC;
- (void)p_switchFeedTabType:(long long)a0;
- (id)p_getCommentFeedVCWithTabType:(long long)a0;
- (long long)p_getCurrentOuterTabType;
- (id)slidingChildVCs;
- (void)p_transformScrollStateTo:(long long)a0;
- (id)p_currentShowingScrollView;
- (void)p_setScrollViewOffset:(double)a0 scrollView:(id)a1;
- (void)p_resetHeaderAlpha;
- (void)p_onReturnButtonClicked:(id)a0;
- (void)p_handleCommentInput:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
