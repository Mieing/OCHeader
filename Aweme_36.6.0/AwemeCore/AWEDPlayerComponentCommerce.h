@class NSString, UIView;
@protocol AWEFeedAdInteractiveViewProtocol, AWEAdSimilarRecommendView;

@interface AWEDPlayerComponentCommerce : AWEDPlayerBaseComponent <AWEFeedAdInteractiveViewDelegate, AWEDPlayerComponentCommerceProtocol>

@property (retain, nonatomic) UIView<AWEFeedAdInteractiveViewProtocol> *adInteractiveView;
@property (weak, nonatomic) UIView<AWEAdSimilarRecommendView> *similarRecommendView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)updatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)pauseIfNotStop;
- (void)hideInteractionViews:(BOOL)a0;
- (BOOL)shouldResponseTapEventOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)tappedInteractionViewOnLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)interactiveView_currentPlayTimeMS;
- (void)trackAdPlayOver;
- (BOOL)isInteractiveAICardSceneWithAweme:(id)a0;
- (void)handleResignActiveNotification;
- (void)adSimilarRecommendViewStartShow:(id)a0;
- (void)adSimilarRecommendViewStartHide:(id)a0;
- (void)adVibrationMaterialDownloadSuccess:(id)a0;
- (void)adVibrationEngineStartSuccess:(id)a0;
- (void)foldAdInteractiveViewIfNeeded;
- (void)showAdInteractiveViewIfNeeded;
- (void)configAdInteractiveViewWithAwemeModel:(id)a0;
- (void)setupAdInteractiveView;
- (void)addLotteryMissionTimer;
- (void)adTriggerComponentActionAfter:(double)a0 block:(id /* block */)a1;
- (void)showAdInteractiveView;
- (id)interactiveLeftBottomViewForFold;
- (void)trackAdWhenStopped;
- (void)setupAdCardIfNeeded;
- (void)setupAdTrackIfNeeded;
- (void)safeCallGokuMessage;
- (void)playerWillLoopPlaying:(id)a0;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)pause;
- (BOOL)stop;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)play:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)addObservers;
- (BOOL)pauseIfPlaying;
- (void)updatePlayerConfiguration;

@end
