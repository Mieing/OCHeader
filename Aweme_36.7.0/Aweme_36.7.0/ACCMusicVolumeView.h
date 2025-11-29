@class NSString, UISlider, ACCMusicVolumeSlider, UIButton;
@protocol HTSVideoSoundEffectPanelViewActionDelegate, ACCMusicVolumeViewModelProtocol, ACCMusicVolumeViewDelegate;

@interface ACCMusicVolumeView : UIView <HTSVideoSoundEffectPanelViewProtocol>

@property (nonatomic) float voiceVolume;
@property (nonatomic) float musicVolume;
@property (readonly, nonatomic) UISlider *bgmSlider;
@property (readonly, nonatomic) UISlider *voiceSlider;
@property (weak, nonatomic) id<HTSVideoSoundEffectPanelViewActionDelegate> actionDelegate;
@property (nonatomic) BOOL userControlVoiceDisable;
@property (nonatomic) BOOL preconditionVoiceDisable;
@property (nonatomic) BOOL preconditionBgmMusicDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ACCMusicVolumeSlider *voiceSliderView;
@property (retain, nonatomic) ACCMusicVolumeSlider *bgmSliderView;
@property (retain, nonatomic) UIButton *backButton;
@property (readonly, nonatomic) id<ACCMusicVolumeViewModelProtocol> viewModel;
@property (weak, nonatomic) id<ACCMusicVolumeViewDelegate> delegate;

- (void)setupBinding;
- (void)adjustForMusicSelectPanelOptimizationWithDelegate:(id)a0;
- (void)updateBgmMaximumValue:(double)a0;
- (void)voiceSliderValueChanged:(id)a0;
- (void)voiceSliderValueChangedStart:(id)a0;
- (void)voiceSliderValueChangedEnd:(id)a0;
- (void)bgmSliderValueChanged:(id)a0;
- (void)bgmSliderValueChangedStart:(id)a0;
- (void)bgmSliderValueChangedEnd:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)show;
- (void)setupUI;
- (void)backButtonTapped:(id)a0;

@end
