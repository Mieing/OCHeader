@class NSString, NSDictionary, AWEAwemeModel, UIView, IESLivePlayerAudioLoudness, NSObject;
@protocol AWELiveStreamPlayer, AWELiveVSMessageService, HunterLiveViewPlayerDelegate, AWELiveRoomFinishedListenerProtocol;

@interface HunterLiveView : UIView <IESLivePlayerControllerDelegate, UIGestureRecognizerDelegate, AWELivePaidLivePlayerDelegate, AWELiveVSMessageSubscriber, AWELiveRoomMessage>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) double startPlayerTime;
@property (nonatomic) double startLoadingTime;
@property (retain, nonatomic) IESLivePlayerAudioLoudness *sourceLoudness;
@property (retain, nonatomic) NSObject<AWELiveRoomFinishedListenerProtocol> *roomFinishListener;
@property (retain, nonatomic) UIView *vsWatermarkView;
@property (retain, nonatomic) id<AWELiveVSMessageService> messageService;
@property (nonatomic) long long payStatus;
@property (nonatomic) long long scaleMode;
@property (nonatomic) BOOL mute;
@property (nonatomic) double volume;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (weak, nonatomic) id<HunterLiveViewPlayerDelegate> delegate;
@property (retain, nonatomic) id<AWELiveStreamPlayer> playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLoudness:(float)a0 soucePeak:(float)a1 targetLufs:(float)a2 isEnableExternalAETargetLufs:(BOOL)a3;
- (void)player:(id)a0 loadStateDidChange:(unsigned long long)a1;
- (void)player:(id)a0 didReceiveMetaInfo:(id)a1 processed:(BOOL)a2;
- (void)player:(id)a0 didReceiveError:(id)a1;
- (void)playerFrozen:(id)a0;
- (void)playerResume:(id)a0;
- (id)livePlayerView;
- (void)trackLiveSdkDurationV2;
- (void)trialTimeDidChange:(double)a0;
- (void)viewStatusDidChange:(long long)a0 hasShareTickets:(BOOL)a1;
- (BOOL)shouldEnterFullScreenWithPlayer;
- (void)p_addRoomFinishListener;
- (struct CGSize { double x0; double x1; })p_sizeWithSizeString:(id)a0;
- (void)p_updatePlayerCover;
- (void)p_createPlayerController;
- (void)p_startPlayLiveWithSteamData:(id)a0 orStreamURL:(id)a1;
- (void)p_addWatermark;
- (void)installMessageChannel;
- (void)trackLiveDurationLog;
- (void)p_didStop;
- (void)uninstallMessageChannel;
- (void)p_stopAndRelease;
- (void)onMessageReceivce:(id)a0 messageStr:(id)a1;
- (void)stopAndRelease;
- (void)openPaidPanel;
- (void)checkRoomEndStatusWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (id)transitionContext;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;
- (void)p_didEnd;
- (id)livePlayer;

@end
