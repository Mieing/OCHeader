@class NSString, IESECPDPVideoPlayerState, NSObject;
@protocol OS_dispatch_queue, IESECPDPVideoPlayStateManagerProtocol, IESECPDPVideoOnFloatManagerProtocol;

@interface IESECPDPBackgroundAppPlayerViewModel : NSObject <IESECPDPStateControlledVideoPlayerProtocol, IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (nonatomic) unsigned long long originOptions;
@property (copy, nonatomic) NSString *originCategory;
@property (nonatomic) BOOL shouldIgnoreBackgroundPlayer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (weak, nonatomic) id<IESECPDPVideoPlayStateManagerProtocol> pdp_stateManager;
@property (weak, nonatomic) id<IESECPDPVideoOnFloatManagerProtocol> pdp_floatManager;
@property (readonly, nonatomic) NSString *pdp_playerScene;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_audioState;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_videoState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewWillDismiss:(id)a0;
- (void)initializeWithContainer:(id)a0;
- (void)changeBackgroundAppMuteStatusTo:(BOOL)a0;
- (void)pdp_mute:(BOOL)a0;
- (BOOL)pdp_shouldPlayerBeControlled;
- (unsigned long long)pdp_playStrategy;
- (void)pdp_onAllPlayerMutedWithPrevPlayer:(id)a0;
- (void)pdp_onPlayer:(id)a0 playStatusChangeTo:(BOOL)a1;
- (void).cxx_destruct;

@end
