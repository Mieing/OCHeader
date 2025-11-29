@class IESLiveGiftMP4PlayerConfig, NSString, UIView, IESLiveVideoGiftController;
@protocol IESLiveRoomRealStreamingServiceAdapter, IESLiveGiftMP4PlayerDelegate;

@interface IESLiveGiftMP4Player : NSObject <IESLiveVideoGiftControllerDelegate>

@property BOOL hasMannualOpenAEC;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (retain, nonatomic) IESLiveGiftMP4PlayerConfig *config;
@property (retain, nonatomic) IESLiveVideoGiftController *giftController;
@property (retain, nonatomic) UIView *playerView;
@property (weak, nonatomic) id<IESLiveRoomRealStreamingServiceAdapter> realStreamingService;
@property (weak, nonatomic) id<IESLiveGiftMP4PlayerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)frameCallBack:(double)a0;
- (void)videoGiftController:(id)a0 didEndPlayingFrame:(id)a1;
- (void)successParseConfigResourceModel:(id)a0;
- (BOOL)videoControllerShouldDelayPlayIfAudioResouces:(id)a0;
- (float)audioPlayVolume;
- (id)videoGiftController:(id)a0 externalAudioPlayer:(id)a1 resource:(id)a2 error:(id *)a3;
- (void)play:(id)a0 superViewFame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)asyncPlayWithCheckAECState:(long long)a0;
- (BOOL)isHeadsetPluggedIn;
- (void)stopPlayingWithError:(id)a0;
- (void)closeEchoCancellation;
- (BOOL)shouldDelayPlayIfAudioResouces:(id)a0;
- (void)openEchoCancellation;
- (float)_getAudioPlayVolumeFromPlayerStreamSound;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)stopEngine;

@end
