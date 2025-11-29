@class NSString, AWEBinding, AWEAwemeModel;

@interface AWEFeedOfflineGuideV2Controller : AWEBaseController <AWEFeedControllerProtocol, AWEAwemeOfflineGuideV2Protocol>

@property (retain, nonatomic) AWEBinding *stateVCBinding;
@property (retain, nonatomic) AWEBinding *cachesAlreadyBinding;
@property (nonatomic) BOOL hasInsertOfflineGuideCell;
@property (nonatomic) BOOL isColdLaunchGuideCell;
@property (nonatomic) BOOL isNormalGuideCell;
@property (nonatomic) BOOL hasAutoAppendOfflineVideos;
@property (nonatomic) long long appendPageCount;
@property (nonatomic) long long appendedIndex;
@property (retain, nonatomic) AWEAwemeModel *guideModel;
@property (retain, nonatomic) AWEAwemeModel *tapOfflineTipsModel;
@property (nonatomic) BOOL isFeedVCAppear;
@property (nonatomic) long long lastAwemeType;
@property (nonatomic) BOOL clickOfflineTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)onDataSourceReload;
- (void)p_handleConnectionChanged:(id)a0;
- (void)onStartPlayOfflineAwemeModelWithEnterFrom:(id)a0;
- (void)onScrollTopGuideCellWithEnterFrom:(id)a0 awemeModel:(id)a1;
- (void)p_applicationWillTerminate;
- (void)p_showColdLaunchOfflineGuideV2CellIfNeeded;
- (void)p_resetViewControllerStateIfNeeded;
- (void)p_removeOfflineGuideV2CellIfNeeded;
- (void)p_appendOfflineAwemeModelsToFeedWithShouldScrollToNext:(BOOL)a0;
- (void)p_showNormalOfflineGuideV2CellIfNeeded;
- (void)p_trackEnterOfflineModelWithEnterFrom:(id)a0;
- (void)p_trackExitOfflineModeWithExitMethod:(id)a0;
- (BOOL)hasOfflineDownloadVideo;
- (BOOL)p_offlineGuideEnable;
- (void)p_cleanOfflineCacheIfNeeded;
- (void)p_trackOfflineModelStatusWithEnterFrom:(id)a0;
- (void)p_showNormalOfflineGuideV2CellIfNeededAtIndex:(long long)a0;
- (void)p_updateOfflineModeUserID;
- (void)p_onRecordOfflineVideoPlay:(id)a0;
- (id)p_enterFrom;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidDisappear;

@end
