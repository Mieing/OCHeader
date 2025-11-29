@class NSString;
@protocol IESLivePlayerProtocol;

@interface IESLiveStreamPlayerPlayerControlPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerPlayerControlPluginProtocol>

@property (nonatomic) BOOL disableMuteOperation;
@property (nonatomic) BOOL isPauseCalled;
@property (readonly, nonatomic) id<IESLivePlayerProtocol> player;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (void)didSetAttachingDIContext;
- (BOOL)isPause;
- (void)startVideoRenderingWithCallTrace:(id)a0;
- (void)stopVideoRenderingWithCallTrace:(id)a0;
- (void)startAudioRenderingWithCallTrace:(id)a0;
- (void)stopAudioRenderingWithCallTrace:(id)a0;
- (BOOL)isBufferFull;
- (void)setMuteForce:(BOOL)a0 callTrace:(id)a1;
- (void)setMute:(BOOL)a0 callTrace:(id)a1;
- (BOOL)checkPlayerFirstFrameStateIfNeeded:(id)a0;
- (void)stopLastPlayerIfNeededWithCallTrace:(id)a0;
- (BOOL)isResumePlay;
- (void)pe_viewWillAppear;
- (void)pe_viewDidAppear;
- (void)pe_viewWillDisappear;
- (void)pe_viewDidDisappear;
- (void)pe_commonInit;
- (void)pe_prepareForReuse;
- (void)pe_playWithCallTrace:(id)a0;
- (void)pe_pauseWithCallTrace:(id)a0;
- (void)pe_stopWithCallTrace:(id)a0;
- (BOOL)isPlaying;
- (void)setVolume:(float)a0;
- (float)volume;
- (BOOL)isMute;

@end
