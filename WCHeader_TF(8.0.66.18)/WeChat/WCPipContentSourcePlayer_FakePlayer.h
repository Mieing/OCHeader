@class AVPlayerItem, NSString, WCPlayerLayerView, WCPipSupportPlayer;

@interface WCPipContentSourcePlayer_FakePlayer : WCPipContentSourcePlayer <WCPipPlayerDelegate>

@property (nonatomic) BOOL isCreatingFakeAsset;
@property (retain, nonatomic) WCPipSupportPlayer *player;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) WCPlayerLayerView *displayLayerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 playArgs:(id)a1 playbackInfo:(id)a2 completionHandler:(id /* block */)a3;
- (void)dealloc;
- (void)unregisterPipResourcre;
- (void)occupyAudioModuleSucc:(BOOL)a0;
- (void)setPlayerVideoGravityWithPlayerContentMode:(long long)a0;
- (void)createPipResouce;
- (void)createPipContentRes;
- (void)tryClosePipWhenAppActive;
- (void)play;
- (void)pause:(BOOL)a0;
- (void)seekTo:(double)a0;
- (void)onStartBuffering;
- (void)onBufferingComplete;
- (void)setRate:(double)a0;
- (void)setLoopBack:(BOOL)a0;
- (void)onPlayerEnterErrorState;
- (void)onPlayerDidPlayToEnd;
- (void)onStartDisplayOnPipWindow:(long long)a0;
- (void)setIsPipPlaying:(BOOL)a0;
- (void)onRequireSyncToPipPlayerTime:(double)a0;
- (void)onPipPlayerStateDidChange:(long long)a0;
- (void)handleBackGroundPlayerOnPrepared;
- (void)handleBackGroundPlayerPlaying;
- (void)handleBackGroundPlayerPaused;
- (void)handleBackGroundPlayerComplete;
- (void)onPipPlayerRePlay;
- (double)getMainCurrentTime;
- (void).cxx_destruct;

@end
