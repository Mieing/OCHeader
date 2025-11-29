@class NSString, IESECPDPVideoPlayerState;
@protocol IESECGoodsDetailContainerProtocol, IESECGoodsDetailLiveFloatOnTop, IESECPDPVideoOnFloatManagerProtocol, IESECPDPVideoPlayStateManagerProtocol;

@interface IESECPDPLiveFloatViewModel : NSObject <IESECPDPStateControlledVideoPlayerProtocol, IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (weak, nonatomic) id<IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) BOOL isContainerDisappear;
@property (nonatomic) BOOL isLiveFloatClosedOtherPage;
@property (nonatomic) BOOL isLiveFloatUserClosed;
@property (nonatomic) BOOL isLiveFloatUserMuted;
@property (nonatomic) BOOL isLiveFloatFromOthers;
@property (nonatomic) BOOL willGoToLiveRoom;
@property (nonatomic) BOOL didContainerFirstAppear;
@property (nonatomic) BOOL isFromReplayPopCard;
@property (retain, nonatomic) id<IESECGoodsDetailLiveFloatOnTop> liveFloatOnTop;
@property (weak, nonatomic) id<IESECPDPVideoPlayStateManagerProtocol> pdp_stateManager;
@property (weak, nonatomic) id<IESECPDPVideoOnFloatManagerProtocol> pdp_floatManager;
@property (readonly, nonatomic) NSString *pdp_playerScene;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_audioState;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_videoState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(id)a0;
- (void)containerViewWillDisappear:(id)a0;
- (void)containerViewDidDisappear:(id)a0;
- (void)detachLiveFloatOnTop;
- (void)detachLiveFloatOnTopWithResumeLive;
- (void)attachLiveFloatOnTop;
- (void)setupLiveFloatOnTopStateBlockIfNeeded;
- (void)containerDidRender:(id)a0;
- (void)containerViewWillDismiss:(id)a0;
- (void)container:(id)a0 didSwitchTo:(long long)a1;
- (void)container:(id)a0 willPopOverContent:(id)a1;
- (void)container:(id)a0 didDismissContent:(id)a1;
- (void)didReceiveHeaderPlayerStateChangeFromPreview:(id)a0 playingState:(BOOL)a1 muteState:(BOOL)a2;
- (void)initializeWithContainer:(id)a0;
- (void)pdp_play;
- (void)pdp_pause;
- (void)pdp_mute:(BOOL)a0;
- (unsigned long long)pdp_videoStrategy;
- (BOOL)pdp_shouldPlayerBeControlled;
- (void)pdp_showPlayerOnFloat;
- (void)pdp_dismissPlayerOnFloat;
- (void)pdp_onAllPlayerMutedWithPrevPlayer:(id)a0;
- (BOOL)getShouldDetachLiveFloatWhenContainerWillDisappear:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
