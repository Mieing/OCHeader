@class AWESlider, UILabel, NSString;
@protocol HTSVideoSoundEffectPanelViewActionDelegate;

@interface HTSVideoSoundEffectPanelView : UIView <HTSVideoSoundEffectPanelViewProtocol>

@property (retain, nonatomic) AWESlider *bgmSlider;
@property (retain, nonatomic) UILabel *bgmLabel;
@property (retain, nonatomic) AWESlider *voiceSlider;
@property (retain, nonatomic) UILabel *voiceLabe;
@property (nonatomic) BOOL isAdjustForMusicPanel;
@property (nonatomic) float voiceVolume;
@property (nonatomic) float musicVolume;
@property (weak, nonatomic) id<HTSVideoSoundEffectPanelViewActionDelegate> actionDelegate;
@property (nonatomic) BOOL userControlVoiceDisable;
@property (nonatomic) BOOL preconditionVoiceDisable;
@property (nonatomic) BOOL preconditionBgmMusicDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustForMusicSelectPanelOptimizationWithDelegate:(id)a0;
- (void)updateBgmMaximumValue:(double)a0;
- (void)sliderValueDidFinishChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useBlurBackground:(BOOL)a1;
- (void)configMusicPanelWithDarkBackground:(BOOL)a0;
- (void)setVoiceLabelTitle:(id)a0;
- (void)setBGMLabelTitle:(id)a0;
- (void)sliderValueChanged:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)show;
- (void)backButtonTapped:(id)a0;

@end
