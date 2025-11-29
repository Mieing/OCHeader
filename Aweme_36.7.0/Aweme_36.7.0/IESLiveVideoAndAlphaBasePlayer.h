@class NSDictionary, HTSLiveEffectPlayerStringPiece, IESLiveAlphaVideoPlayerButtonView;

@interface IESLiveVideoAndAlphaBasePlayer : NSObject

@property (nonatomic) BOOL giftSoundVolumeDynamicAdjust;
@property (copy, nonatomic) NSDictionary *soundGiftVolumeConfigs;
@property (retain, nonatomic) IESLiveAlphaVideoPlayerButtonView *buttonView;
@property (retain, nonatomic) HTSLiveEffectPlayerStringPiece *stringPiece;
@property (nonatomic) BOOL soundAndVibrationSwitchEnable;

- (void)frameCallBack:(double)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)didSetAttachingDIContext;
- (BOOL)enableVibrate;
- (void)setEnableVibrate:(BOOL)a0;
- (void)setEnableSound:(BOOL)a0;
- (BOOL)enableSound;
- (void)updateVibrateAndSoundButton:(id)a0 completion:(id /* block */)a1;
- (BOOL)vibrateButtonDidShow;
- (void)setVibrateButtonDidShow:(BOOL)a0;
- (void)updateVibrateButton:(id)a0 completion:(id /* block */)a1;
- (BOOL)soundButtonDidShow;
- (void)setSoundButtonDidShow:(BOOL)a0;
- (void)updateSoundButton:(id)a0 completion:(id /* block */)a1;
- (void)loadButtonView:(id)a0 metalFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withAction:(SEL)a2 useXY:(BOOL *)a3;
- (void)destroyButtonView;
- (void)execActionSafely:(id /* block */)a0;
- (float)audioPlayVolumeWithIsAnchor:(BOOL)a0;
- (float)_getAudioPlayVolumeFromPlayerStreamSound;
- (void).cxx_destruct;

@end
