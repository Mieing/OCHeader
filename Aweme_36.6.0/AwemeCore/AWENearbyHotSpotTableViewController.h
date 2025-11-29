@class AWENearbyHotRankFMPManager, NSString, AWENearbyHotSpotBottomView, AWEShellViewController, AWENearbyHotSpotTopTitleView, AWENearbyHotSpotProgressView, AWENearbyHotSpotTableViewModel;
@protocol AWEAwemeNewDetailTableContainerProtocol, AWEAwemeDetailTableViewControllerProtocol, AWEAwemeDetailTableVCComposableProtocol;

@interface AWENearbyHotSpotTableViewController : UIViewController <AWENearbyHotSpotBottomViewDelegate, AWENearbyHotSpotFeedDataControllerDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEAwemeDetailTableViewControllerOuterContainerProtocol, AWENearbyHotSpotFeedDispatcherDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) AWEShellViewController<AWEAwemeDetailTableViewControllerProtocol, AWEAwemeNewDetailTableContainerProtocol, AWEAwemeDetailTableVCComposableProtocol> *detailVC;
@property (retain, nonatomic) AWENearbyHotSpotTopTitleView *topTitleView;
@property (retain, nonatomic) AWENearbyHotSpotBottomView *bottomView;
@property (retain, nonatomic) AWENearbyHotSpotProgressView *progressView;
@property (retain, nonatomic) AWENearbyHotSpotTableViewModel *viewModel;
@property (retain, nonatomic) AWENearbyHotRankFMPManager *monitor;
@property (nonatomic) BOOL bFirstDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)videoPlayerDidReadyForDisplay:(id)a0;
- (BOOL)detailTableViewControllerNeedUpdateBottomBarWhenReload:(id)a0;
- (unsigned long long)bizType;
- (id)currentAwemeModel;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_didStartTransitionWithContext:(id)a0;
- (BOOL)transition_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)onScrollViewWillBeginDragging:(double)a0;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)preloadModel:(id)a0;
- (void)transition_didCancelPercentDrivenTransitionWithContext:(id)a0;
- (id)bottomBarCoordinator;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)onScrollWillChangeVideo:(id)a0 index:(long long)a1 directTop:(BOOL)a2;
- (void)onScrollBackToIndex:(long long)a0;
- (void)configDetailVC;
- (void)shakeOnChangeHotPoint;
- (void)fastSwitchNextHotSpot;
- (void)actionClicked;
- (void)updateCollectionStatus:(id)a0;
- (id)schemaTrackerData;
- (void)bottomViewDisableInteraction:(BOOL)a0;
- (void)loadMoreNearbyHotSpot;
- (void)didRequestCompleteWithPullType:(long long)a0 success:(BOOL)a1 models:(id)a2;
- (void)updateProgressUIWithCurrentModel:(id)a0 isScroll:(BOOL)a1;
- (void)changeToNewHotSpotModel:(id)a0 isScrolled:(BOOL)a1;
- (id)createBottomBarContextBlock;
- (id)currentHotSpotModel;
- (void).cxx_destruct;
- (id)tableView;
- (id)init;
- (void)startRequest;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidDisappear:(BOOL)a0;
- (id)context;
- (void)viewWillDisappear:(BOOL)a0;
- (id)currentInteractionController;
- (void)setupUI;
- (void)endRequest;
- (id)dataController;

@end
