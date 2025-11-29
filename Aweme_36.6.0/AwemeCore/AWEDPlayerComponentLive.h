@class NSString;
@protocol AWELiveReplayServiceManagerInterface;

@interface AWEDPlayerComponentLive : AWEDPlayerBaseComponent <AWEDPlayerComponentLiveProtocol>

@property (retain, nonatomic) id<AWELiveReplayServiceManagerInterface> liveReplayInteractionManager;
@property (nonatomic) BOOL isFinishPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (id)liveModuleService;
- (BOOL)hasGoodsStrictly;
- (id)liveEntry;
- (void)trackLiveReplayPlayDurationFromDisappear:(BOOL)a0;
- (void)showLiveBubbleGuideIfNeed;
- (void)playTimeUpdate;
- (void)configLiveReplayInteractionView;
- (void)livereplay_player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (BOOL)shouldShowPOICard;
- (void)playerWillLoopPlaying:(id)a0;
- (void)setPlayerSeekTime:(double)a0 completion:(id /* block */)a1;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAdvertisement;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
