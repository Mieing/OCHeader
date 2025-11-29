@class NSString, IESECPDPVideoPlayerState;
@protocol IESECPDPVideoPlayStateManagerProtocol, IESECPDPVideoOnFloatManagerProtocol;

@interface IESECPDPStateControlledHeaderVideoPlayerView : IESECVideoPlayerView <IESECPDPStateControlledVideoPlayerProtocol>

@property (weak, nonatomic) id<IESECPDPVideoPlayStateManagerProtocol> pdp_stateManager;
@property (weak, nonatomic) id<IESECPDPVideoOnFloatManagerProtocol> pdp_floatManager;
@property (readonly, nonatomic) NSString *pdp_playerScene;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_audioState;
@property (retain, nonatomic) IESECPDPVideoPlayerState *pdp_videoState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mutePlayer:(BOOL)a0;
- (void)pdp_play;
- (void)pdp_pause;
- (void)pdp_mute:(BOOL)a0;
- (void)playerPlaybackStateDidChange:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;

@end
