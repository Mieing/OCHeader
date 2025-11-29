@class AWEMVInFlowPlayQualityTracker, AWEMVChannelPageContext;

@interface AWEMVQualityTrackerController : AWEDCFeedBaseController

@property (weak, nonatomic) AWEMVChannelPageContext *bizContext;
@property (retain, nonatomic) AWEMVInFlowPlayQualityTracker *inFlowTracker;

- (void)detailTableViewController:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2 model:(id)a3;
- (void)detailTableViewControllerWillDisappear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewControllerWillAppear:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewController:(id)a0 awemeModel:(id)a1 didChangePlaybackStateWithAction:(long long)a2;
- (void)detailTableViewControllerWillExit:(id)a0 currentAwemeModel:(id)a1;
- (void)detailTableViewController:(id)a0 scrollViewDidBeginDragging:(id)a1;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 startDidSelectItemAtIndexPath:(id)a1;
- (void)onRefreshBeStoppedWithRefreshReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataStartWithReason:(unsigned long long)a0;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onGeneralActionTriggeredWithType:(unsigned long long)a0 sender:(id)a1 params:(id)a2 sectionViewModel:(id)a3;
- (void)detailTableViewControllerVideoPlayerDidReadyForDisplay:(id)a0;
- (id)perfMonitor;
- (void).cxx_destruct;

@end
