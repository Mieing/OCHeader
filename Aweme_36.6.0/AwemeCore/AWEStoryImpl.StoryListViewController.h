@class NSString, UIViewController;
@protocol AWEFeedTableViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerMixVideoProtocol;

@interface AWEStoryImpl.StoryListViewController : AWEBaseListViewController <AFDContainerViewControllerDelegateProtocol, AWEFamiliarViewControllerProtocol, AWEFeedTabItemViewControllerProtocol, AFDFmiliarFeedOnTopTabLifeCycleProtocol, AWERouterViewControllerProtocol, AWEShellViewControllerProtocol, UIScrollViewDelegate, AWEStoryContainerViewControllerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_controllerManager;
    void /* unknown type, empty encoding */ isFirstFrameRecorded;
    void /* unknown type, empty encoding */ isVCActive;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataController;
    void /* unknown type, empty encoding */ detailTableViewController;
}

@property (nonatomic, copy) NSString *referString;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, readonly) UIViewController<AWEFeedTabItemViewControllerProtocol, AWEFeedTableViewControllerMixVideoProtocol, AWEFeedTableViewControllerProtocol> *feedTableVC;
@property (nonatomic) long long currentIndex;
@property (nonatomic, weak) void /* function */ containerDelegate;

- (long long)workingRangeSize;
- (void)listDidReloadDataWithCollectionView:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)pauseWithAnimation;
- (BOOL)currentVCIsActive;
- (id)currentAweme;
- (void)listWillPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listDidPerformBatchUpdatesWithCollectionView:(id)a0;
- (void)listWillReloadDataWithCollectionView:(id)a0;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)setRefreshMethod:(id)a0;
- (void)onThemeChanged;
- (void)customLayoutCollectionView:(id)a0;
- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)insertVideosToFamiliarFeedWithAweme:(id)a0;
- (BOOL)currentTabIsFamiliarFeed;
- (long long)currentAwemeIndex;
- (BOOL)canShowAlert;
- (BOOL)isSomethingShowingAbove;
- (BOOL)currentTabIsPresentingLightTheme;
- (BOOL)currentTabCanChangeTheme;
- (void)refreshWhenYellowDotShowingWithCompletion:(id /* block */)a0;
- (void)preloadViewIfNeed;
- (void)toggleFamiliarFeedAllReadTip:(BOOL)a0 WithLastViewModel:(id)a1;
- (BOOL)isShowingMateOnboarding;
- (BOOL)isShowingStoryOnboarding;
- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (void)channelTrackRefreshWithRefreshType:(long long)a0;
- (BOOL)canRefresh;
- (void).cxx_destruct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)reload;
- (void)stop;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)isActive;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;

@end
