@class UIPanGestureRecognizer, NSString, WCFinderNativeDramaHalfScreenViewModel, WCFinderNativeDramaPromotionCoordinator, WCFinderNativeDramaFeedViewModel, WCFinderFeedListView;

@interface WCFinderNativeDramaFeedViewController : MMUIViewController <WCFinderNativeDramaFeedViewModelDelegate, WCFinderFeedListViewDelegate, WCFinderNativeDramaEpisodeListProtocol, WCFinderNativeDramaHalfScreenDataCacheable, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedListTransitionHelperDelegate, UIGestureRecognizerDelegate, WCFinderNativeDramaFeedUnlockViewDelegate, WCFinderNativeDramaIAAFeedViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (nonatomic) BOOL popDetailOnce;
@property (retain, nonatomic) WCFinderNativeDramaFeedViewModel *viewModel;
@property (retain, nonatomic) WCFinderNativeDramaHalfScreenViewModel *nativeDramaDetailHalfScreenViewModel;
@property (retain, nonatomic) WCFinderFeedListView *feedListView;
@property (retain, nonatomic) UIPanGestureRecognizer *tipsPanGesture;
@property (retain, nonatomic) WCFinderNativeDramaPromotionCoordinator *promotionCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_appWillEnterForeground;
- (void)_appDidEnterBackground;
- (void)_setupUI;
- (void)_setupFeedListView;
- (void)_setupNavigationTitle;
- (void)_onPanGestureChanged:(id)a0;
- (void)viewModel:(id)a0 feedItemDidChangeWithDiff:(id)a1;
- (void)_updateFooterView;
- (id)_currentContentVM;
- (unsigned long long)_currentEpisodeID;
- (void)_updateContentVMWithEpisodeID:(unsigned long long)a0;
- (BOOL)finderFeedListViewCanPreFetchData:(id)a0;
- (BOOL)finderFeedListViewIsNoMoreData:(id)a0;
- (void)finderFeedListViewFetchMoreData:(id)a0;
- (void)finderFeedListViewRetryFetch:(id)a0;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)a0;
- (void)finderFeedListViewHeaderFetchMoreData:(id)a0;
- (void)finderFeedListStartMediaPlay;
- (void)finderFeedListVideoMediaIsPause:(BOOL)a0;
- (void)finderFeedListViewDidEndScrollingAnimation:(id)a0;
- (void)finderFeedListViewDidEndDecelerating:(id)a0;
- (void)finderFeedListView:(id)a0 playRateDidChanged:(double)a1;
- (id)finderFeedListViewCurrentViewController:(id)a0;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)a0 contentVM:(id)a1 finderPlayerReport:(id)a2;
- (void)finderFeedListView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)finderFeedListView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_didEndScrolling;
- (void)view:(id)a0 didTriggerUnlockActionWithModel:(id)a1;
- (void)nativeDramaIAAFeedController:(id)a0 didUnlockEpisode:(unsigned long long)a1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)halfScreen:(id)a0 jumpToEpisode:(unsigned long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)minimizePageBizKey;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)a0;
- (BOOL)finderFeedListView:(id)a0 disabledMinimizeForContentTid:(id)a1;
- (void)_reportPromotionDisplay;
- (void).cxx_destruct;

@end
