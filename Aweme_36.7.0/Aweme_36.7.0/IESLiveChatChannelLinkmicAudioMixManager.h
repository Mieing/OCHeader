@class NSString;

@interface IESLiveChatChannelLinkmicAudioMixManager : NSObject <IESLiveChatChannelLinkmicAudioMixRouter>

@property (nonatomic) BOOL isAudioMixEnable;
@property (nonatomic) int streamPlayerSampleRate;
@property (nonatomic) int streamPlayerChannels;
@property (copy, nonatomic) id /* block */ processBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)playerWillOpenAudioRenderWithSampleRate:(int)a0 channels:(int)a1 duration:(int)a2;
- (void)playerWillProcessAudioFrameWithRawData:(float **)a0 samples:(int)a1 timeStamp:(long long)a2;
- (void)playerOnRenderAudioFrame:(id)a0;
- (void)onCameraDidChangeTo:(id)a0 source:(long long)a1;
- (void)enableAudioMix:(BOOL)a0;
- (void)onAudioProcess:(id /* block */)a0;
- (void).cxx_destruct;

@end
