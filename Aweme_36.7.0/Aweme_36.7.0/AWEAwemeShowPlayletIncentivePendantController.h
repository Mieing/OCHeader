@class NSString, NSMutableDictionary, LOTAnimationView;

@interface AWEAwemeShowPlayletIncentivePendantController : AWEAwemeFeedBaseController <AWEAwemeFeedBaseControllerProtocol>

@property (nonatomic) BOOL isShowingBlockView;
@property (nonatomic) BOOL isVideoPlaying;
@property (nonatomic) BOOL isStopTimingDuringPreviewTime;
@property (nonatomic) BOOL hasShownFirstCell;
@property (nonatomic) BOOL isRecordedPreviewTimesCountInPlayCycle;
@property (copy, nonatomic) NSString *lastAwemeId;
@property (copy, nonatomic) NSString *currentPlayletId;
@property (retain, nonatomic) NSMutableDictionary *playletIncentiveExclusiveLottieJsonDict;
@property (retain, nonatomic) LOTAnimationView *playletIncentiveExclusiveLottieView;
@property (nonatomic) BOOL needPlayPlayletIncentiveExclusiveLottie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEMainModuleDOUYINLiteAdapterClass;
+ (Class)aAWEFeedCountTimerRulesDOUYINLiteAdapterClass;

- (void)cellViewControllerDidRenderFirstFrame:(id)a0;
- (void)configCell:(id)a0 model:(id)a1;
- (void)onScrollDidEndWithIndexPath:(id)a0;
- (void)currentPlayVideoDidChangePlayState:(long long)a0;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)detailCellViewController:(id)a0 awemeModel:(id)a1 playerPlayTime:(double)a2 canPlayTime:(double)a3 totalTime:(double)a4;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)setupEvent;
- (id)aAWEMainModuleDOUYINLiteAdapter;
- (void)updatePlayletInfo:(id)a0;
- (BOOL)shouldShowPlayletIncentivePendant;
- (void)processBlockViewInNoPreviewAwemeModel:(id)a0;
- (void)updateBlockViewShowingStateIfNeeded:(BOOL)a0;
- (void)processBlockViewInAwemeModel:(id)a0 playTime:(double)a1 isManualSelectForNoPreview:(BOOL)a2;
- (void)handlePlayletFlowPageDealloc:(id)a0;
- (BOOL)enableShowPlayletPendantCoinGrowthStrategy;
- (BOOL)isPlayletRecommendTableViewContainer;
- (id)fetchPlayletIncentiveExclusiveLottieDict;
- (void)startPlayletIncentiveExclusiveTaskLottie;
- (BOOL)enableShowPlayletPendantCoinGrowthStrategyV2;
- (void)sendIncentivePendantTimerResume:(id)a0;
- (BOOL)isPlayletRecommendCellShowing;
- (BOOL)isDiscoverPlayletTableViewContainer;
- (void)sendEventForBlockViewState:(BOOL)a0;
- (void)sendEventDuringIAAPreviewTime:(BOOL)a0;
- (void)sendEventForBlockPlayletFlowPageDealloc;
- (id)createCollectFlyingToPendantLottieView;
- (void)handleChangePlayletAlbumIfNeeded;
- (void)updatePlayletType:(id)a0;
- (long long)getLimitedWatchPreviewVideoTimes;
- (void)sendIncentivePendantTimerPause:(id)a0;
- (id)getTrackParamsDic:(id)a0;
- (id)getTransferBizParamsJsonString;
- (id)aAWEFeedCountTimerRulesDOUYINLiteAdapter;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;

@end
