@protocol AWEDouyinSelectBrandTrackerProtocol;

@interface AWEAwemeFeedDouyinSelectBrandController : AWEAwemeFeedBaseController

@property long long lastCellIndex;
@property (retain, nonatomic) id<AWEDouyinSelectBrandTrackerProtocol> douyinSelectBrandTracker;

- (void)tableView:(id)a0 didDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)checkBrandEvent;
- (void)handleCommonPanelShowNotification:(id)a0;
- (void)handleCommonPanelDismissNotification:(id)a0;
- (void)handleJXLabelDismissNotification:(id)a0;
- (void)handleRecommendEntranceLabelShowNotification:(id)a0;
- (void)handleRecommendEntranceLabelDismissNotification:(id)a0;
- (void)handleRecommendTagShowNotification:(id)a0;
- (void)handleRecommendTagDismissNotification:(id)a0;
- (BOOL)validateReferStringFromNotification:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)setupNotifications;

@end
