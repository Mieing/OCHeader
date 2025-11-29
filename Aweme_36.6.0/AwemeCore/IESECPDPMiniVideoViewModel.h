@class IESECGoodsDetailMiniVideoView, IESECPDPVideoPlayerState, NSString, IESECGoodsDetailTracker;
@protocol IESECPDPVideoPlayStateManagerProtocol, IESECPDPVideoOnFloatManagerProtocol;

@interface IESECPDPMiniVideoViewModel : NSObject <IESECPDPStateControlledVideoPlayerProtocol, IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (retain, nonatomic) IESECGoodsDetailMiniVideoView *view;
@property (weak, nonatomic) IESECGoodsDetailTracker *tracker;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_audioState;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_videoState;
@property (weak, nonatomic) id<IESECPDPVideoPlayStateManagerProtocol> pdp_stateManager;
@property (weak, nonatomic) id<IESECPDPVideoOnFloatManagerProtocol> pdp_floatManager;
@property (readonly, nonatomic) NSString *pdp_playerScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pdp_play;
- (void)pdp_pause;
- (void)pdp_mute:(BOOL)a0;
- (void)pdp_showPlayerOnFloat;
- (void)pdp_dismissPlayerOnFloat;
- (void)close;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)createView;

@end
