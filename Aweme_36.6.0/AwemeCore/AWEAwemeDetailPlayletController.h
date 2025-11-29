@class AWEFeedPreloadManager, NSString;

@interface AWEAwemeDetailPlayletController : AWEAwemeNewDetailBaseController <AWEAwemeDetailCellViewControllerDelegate>

@property (nonatomic) BOOL currentCellHasRecord;
@property (retain, nonatomic) AWEFeedPreloadManager *playletPreloadManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)playerWillStartNextLoop:(id)a0;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (id)awemeModelWithIndexPath:(id)a0;
- (void)onChangePlayVideoNotification:(id)a0;
- (void)configurePlayletPreloadManager;
- (void)preloadVideoWithIndex:(long long)a0;
- (void)insertPlayletVideoNotification:(id)a0;
- (void)removeVideoForPlayletInsertADNotification:(id)a0;
- (void)updatePlayletModelWithNoti:(id)a0;
- (id)currentWatermarkView;
- (void)savePlayletPlayDuration:(id)a0 duration:(double)a1;
- (void)showPlayletWatermarkWithNeedRelayout:(BOOL)a0;
- (void)showAdInsetTrackForIndexPath:(id)a0;
- (void)willDisplayMonetizeTraceReportWithModel:(id)a0;
- (id)dictionaryForADTrackerParamsWithModel:(id)a0;
- (BOOL)canSavePlayletHistory;
- (void)showWaterViewWithCell:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (void)orientationChanged;

@end
