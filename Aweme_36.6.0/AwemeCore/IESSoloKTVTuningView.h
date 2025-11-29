@class IESSoloKTVTuningViewModel, IESSoloKTVTuningSwitchView, IESLiveNewKTVVolumeSliderViewDH, UIView, UILabel, IESLiveKTVTuningEffectView;

@interface IESSoloKTVTuningView : UIView

@property (retain, nonatomic) IESSoloKTVTuningViewModel *model;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *midLine;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *voiceSlider;
@property (retain, nonatomic) IESLiveNewKTVVolumeSliderViewDH *musicSlider;
@property (retain, nonatomic) IESLiveKTVTuningEffectView *effectView;
@property (nonatomic) BOOL isShow;
@property (nonatomic) double panelHeight;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) id /* block */ didClickOriginBlock;
@property (copy, nonatomic) id /* block */ didClickEarBlock;
@property (copy, nonatomic) id /* block */ didClickMidiBlock;
@property (copy, nonatomic) id /* block */ didSliderVoiceBlock;
@property (copy, nonatomic) id /* block */ didSliderMusicBlock;
@property (copy, nonatomic) id /* block */ didClickEffectBlock;
@property (copy, nonatomic) id /* block */ didShowBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (retain, nonatomic) IESSoloKTVTuningSwitchView *originSwitch;
@property (retain, nonatomic) IESSoloKTVTuningSwitchView *earSwitch;
@property (retain, nonatomic) IESSoloKTVTuningSwitchView *midiSwitch;

- (void)initView;
- (void)bgViewTap:(id)a0;
- (id)initWithModel:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)show;

@end
