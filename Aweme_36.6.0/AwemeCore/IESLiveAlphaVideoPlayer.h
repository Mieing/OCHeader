@class HTSEventContext, NSString, IESLiveAlphaVideoPlayerConfiguration, IESLiveVideoGiftController;
@protocol IESLiveAlphaVideoPlayerActionDelegate, IESLiveRoomRealStreamingServiceAdapter, IESLiveRoomService, IESLiveAlphaVideoPlayerCallbackDelegate;

@interface IESLiveAlphaVideoPlayer : IESLiveVideoAndAlphaBasePlayer <IESLiveVideoGiftControllerDelegate, IESLiveAlphaVideoPlayerDelegate> {
    BOOL _soundAndVibrationSwitchEnable;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (retain, nonatomic) IESLiveAlphaVideoPlayerConfiguration *configuration;
@property (retain, nonatomic) id<IESLiveRoomRealStreamingServiceAdapter> realStreamingService;
@property (nonatomic) BOOL hasMannualOpenAEC;
@property (nonatomic) BOOL liveAlphaVideoPlayerEnableAuxStreamAudioFile;
@property (nonatomic) BOOL liveAudioGiftDisableAec;
@property (nonatomic) double liveAudioGiftAECDelayTime;
@property (nonatomic) long long liveAudioGiftAECRetryTime;
@property (nonatomic) BOOL bpeaAudioCertEnable;
@property (copy, nonatomic) NSString *bpeaAudioCertToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveAlphaVideoPlayerCallbackDelegate> playerCallbackDelegate;
@property (weak, nonatomic) id<IESLiveAlphaVideoPlayerActionDelegate> playerActionDelegate;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 sceneError:(id)a1 scene:(unsigned long long)a2;
- (void)successParseConfigResourceModel:(id)a0;
- (BOOL)videoControllerShouldDelayPlayIfAudioResouces:(id)a0;
- (void)videoGiftController:(id)a0 didSetMetalViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (float)audioPlayVolume;
- (id)videoGiftController:(id)a0 externalAudioPlayer:(id)a1 resource:(id)a2 error:(id *)a3;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:(id)a0 trackContext:(id)a1;
- (void)startPlayWithConfiguration:(id)a0;
- (void)asyncPlayWithCheckAECState:(long long)a0;
- (BOOL)isHeadsetPluggedIn;
- (BOOL)soundAndVibrationSwitchEnable;
- (BOOL)forceDisableVibrate;
- (void)adjustPlayerViewLevelWithConfiguration:(id)a0;
- (void)showStringPiece:(id)a0 videoRatio:(double)a1 needCircle:(BOOL)a2;
- (void)stopPlayingWithError:(id)a0;
- (void)didClickVibrateButton;
- (void)loadButtonView:(id)a0 metalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAction:(SEL)a2;
- (void)didClickSoundButton;
- (void)didClickVibrateAndSoundButton;
- (void)closeEchoCancellation;
- (void)showVibrateAndSoundButton:(id)a0 metalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showSoundButton:(id)a0 metalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showVibrateButton:(id)a0 metalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldDelayPlayIfAudioResouces:(id)a0;
- (void)openEchoCancellation;
- (void)removeStringPiece;
- (void)monitorWithConfiguration:(id)a0 error:(id)a1;
- (void)setSoundAndVibrationSwitchEnable:(BOOL)a0;
- (void)stopPlaying;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)stopEngine;

@end
