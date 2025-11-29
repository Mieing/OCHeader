@class UIView, AWEHotSearchBoardTabModel, NSArray, NSString, UIImageView, AWEHotPointPanelSingleTabTableViewController, AWESlidingTabbarView, NSMutableArray, NSMutableDictionary, AWESlidingViewController;

@interface AWEHotPointMultiPanelViewController : AWEHotPointPanelBaseViewController <AWESlidingViewControllerDelegate, AWEHotPointSingleTabVCDelegate>

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIView *blankAccessView;
@property (retain, nonatomic) AWESlidingTabbarView *slidingTabBar;
@property (retain, nonatomic) AWESlidingViewController *slidingViewController;
@property (retain, nonatomic) NSMutableArray *childViewControllers;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) long long selectedTabIndex;
@property (retain, nonatomic) AWEHotSearchBoardTabModel *initialTabModel;
@property (retain, nonatomic) AWEHotPointPanelSingleTabTableViewController *initialChildVC;
@property (copy, nonatomic) NSArray *filterTabsArray;
@property (nonatomic) BOOL isRecommendViewShowing;
@property (copy, nonatomic) NSString *currentSelectedAuthorSubType;
@property (retain, nonatomic) NSMutableDictionary *backupTrackBoardChangeParams;
@property (nonatomic) BOOL hideEveryPanelAfterFetch;
@property (copy, nonatomic) NSArray *tabArray;
@property (nonatomic) BOOL shouldShowHotWordsRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panelViewController;
- (long long)numberOfControllers:(id)a0;
- (id)slidingViewController:(id)a0 viewControllerAtIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (void)slidingViewController:(id)a0 didFinishTransitionFromPreviousIndex:(long long)a1 currentIndex:(long long)a2 transitionType:(long long)a3;
- (void)showView;
- (id)initWithInitialTab:(id)a0;
- (id)currentTabManager;
- (id)currentTabRecommendManager;
- (void)changeCurrentTabToNationIfNeeded;
- (BOOL)changeToNationTabAndFetchDataWithCompletion:(id /* block */)a0;
- (void)updatePanelLayoutWithCurrentModel:(id)a0 paramsModel:(id)a1;
- (void)updatePanelLayoutWithCurrentModel:(id)a0;
- (void)refreshWithData:(id)a0 risingHotSpotList:(id)a1 paramsModel:(id)a2 otherParams:(id)a3;
- (long long)currentWordTabIndex;
- (void)handleJSBroadcast:(id)a0;
- (void)showRecommendView;
- (long long)nationTab;
- (void)hideRecommendView;
- (void)updateSelectedWordInTabs:(id)a0 paramsModel:(id)a1;
- (void)updateRecommendView:(id)a0;
- (void)p_updateTabManagerAndTabRecommendManager:(id)a0 withChildViewController:(id)a1;
- (id)currentTabVCShownOnScreen;
- (void)updateUI:(id)a0 otherParams:(id)a1;
- (void)singleTabSelected:(long long)a0 hotSearchModel:(id)a1;
- (void)doSpecificUIConfig;
- (void)updateSelectedWordInTabs:(id)a0;
- (id)currentPanelScrollView;
- (void)hideMultiPanelIfNeeded;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (void)viewDidLoad;

@end
