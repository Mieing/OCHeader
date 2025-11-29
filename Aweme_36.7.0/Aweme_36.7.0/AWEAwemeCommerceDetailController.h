@class NSString, NSTimer;
@protocol AWEFeedDolphinAdapter;

@interface AWEAwemeCommerceDetailController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEDolphinSyncDataDelegate> {
    long long _onceToken;
}

@property (retain, nonatomic) id<AWEFeedDolphinAdapter> dolphinAdapter;
@property (nonatomic) long long lastReqSeriesIdx;
@property (nonatomic) long long lastAdReqTime;
@property (nonatomic) BOOL dolphinAdapterInitialized;
@property (nonatomic) long long startTimeOnceMore;
@property (nonatomic) BOOL playTimeRequestOnceMore;
@property (nonatomic) long long playletAdRefreshTime;
@property (nonatomic) BOOL playletAdRefreshFlag;
@property (nonatomic) BOOL playletAdNeedRefreshFlag;
@property (nonatomic) long long playletAdRefreshProgress;
@property (nonatomic) BOOL playletAdIsRequesting;
@property (copy, nonatomic) NSString *ceUniqueKey;
@property (nonatomic) double cellStartTime;
@property (retain, nonatomic) NSTimer *watchDurationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (long long)currentAwemeIndex;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)initialDataSourceFetchDidFinished;
- (void)loadPreviousCompletion:(id)a0 error:(id)a1 isHeaderRefreshing:(BOOL)a2;
- (void)configCell:(id)a0 atIndexPath:(id)a1 tableView:(id)a2;
- (void)detailCellViewController:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)completeWithResultModel:(id)a0;
- (void)searchADOperationToolViewWillDisplay:(id)a0 aweme:(id)a1;
- (void)searchADOperationToolViewDidEndDisplay:(id)a0;
- (BOOL)playletFrisbeeAdInsertEnable;
- (void)initDolphinAdapterIfNeeded;
- (void)showHalfLandingPageIfNeededWithModel:(id)a0 cell:(id)a1;
- (void)updateWatchDuration;
- (void)startRerankIfNeedWithPlayerPlayTime:(double)a0 totalTime:(double)a1;
- (void)startRefreshAdIfNeedWithPlayerPlayTime:(double)a0 totalTime:(double)a1;
- (void)completeWithResultDic:(id)a0;
- (void)insertInPlayletRequestWithModel:(BOOL)a0 blockTime:(double)a1 forRefresh:(BOOL)a2 adSource:(id)a3;
- (BOOL)insertInPlayletDataSourceWithModel:(id)a0 adSource:(id)a1;
- (void)createUniqueKey;
- (id)playletShowTrack;
- (void)removePlayletInsertAd;
- (void)syncReqIDIfNeededForInsertADModel:(id)a0 withPreModel:(id)a1;
- (void)setUpLearnMoreLynxButtonWithModel:(id)a0;
- (id)appendLynxRawAdDataWithSearchCommonParams:(id)a0;
- (id)getGeneralSearchTrackBaseParamsWith:(id)a0;
- (void)showHalfLandingPageWithModel:(id)a0;
- (void)showIMSheetWithModel:(id)a0;
- (void)showECGoodsDetailPageWithModel:(id)a0;
- (void)showPOIDetailWithModel:(id)a0 cell:(id)a1;
- (void)showPOIGoodsDetailWithModel:(id)a0 cell:(id)a1;
- (void)showFeigePageWithModel:(id)a0;
- (void)trackPOIPageShowWithModel:(id)a0;
- (void)changeAd:(id)a0;
- (void)adDataFeedChecker:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)currentDataSource;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)currentModel;
- (void)addObservers;
- (id)clientParams;

@end
