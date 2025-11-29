@class NSString, IESECPDPVideoPlayerState;
@protocol IESECGoodsDetailContainerProtocol, IESECPDPVideoOnFloatManagerProtocol, IESECGoodsDetailHostInjectable, IESECPDPVideoPlayStateManagerProtocol;

@interface IESECPDPFeedPlayerViewModel : NSObject <IESECPDPStateControlledVideoPlayerProtocol, IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (weak, nonatomic) id<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> container;
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
- (void)pageViewWillDisappear:(id)a0;
- (void)containerViewWillDismiss:(id)a0;
- (void)containerPresentAnimationDidEnd:(id)a0;
- (void)container:(id)a0 didSwitchTo:(long long)a1;
- (void)initializeWithContainer:(id)a0;
- (void)pdp_play;
- (void)pdp_pause;
- (void)pdp_mute:(BOOL)a0;
- (unsigned long long)pdp_videoStrategy;
- (id)getGoodsDetailInjection;
- (void).cxx_destruct;

@end
