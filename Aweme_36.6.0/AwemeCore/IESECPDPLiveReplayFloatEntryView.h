@class NSString, IESECPDPVideoPlayerState;
@protocol IESECGoodsDetailContainerProtocol, IESECPDPVideoOnFloatManagerProtocol, IESECGoodsDetailHostInjectable, IESECPDPVideoPlayStateManagerProtocol;

@interface IESECPDPLiveReplayFloatEntryView : IESECGoodsDetailLiveReplayFloatEntryView <IESECPDPStateControlledVideoPlayerProtocol, IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (nonatomic) long long currentMode;
@property (weak, nonatomic) id<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> weakContainer;
@property (nonatomic) BOOL didReplayEntryViewDataReady;
@property (copy, nonatomic) NSString *scene;
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
- (void)container:(id)a0 didSwitchTo:(long long)a1;
- (void)updateReplayFloatEntryWithVideoModel:(id)a0;
- (void)replayDataReady:(id)a0;
- (void)initializeWithContainer:(id)a0;
- (void)pdp_play;
- (void)pdp_pause;
- (unsigned long long)pdp_videoStrategy;
- (BOOL)pdp_canPlayWith:(id)a0;
- (BOOL)pdp_shouldPlayerBeControlled;
- (unsigned long long)pdp_playStrategy;
- (void)pdp_showPlayerOnFloat;
- (void)pdp_dismissPlayerOnFloat;
- (void)pdp_onAllPlayerPausedWithPrevPlayer:(id)a0;
- (void)pdp_onPlayer:(id)a0 floatDisplayStatusChanged:(BOOL)a1;
- (BOOL)canShowOnFloat;
- (void).cxx_destruct;

@end
