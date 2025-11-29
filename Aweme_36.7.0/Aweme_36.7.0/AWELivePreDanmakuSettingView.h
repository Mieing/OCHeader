@class NSDictionary, UIView, AWELivePreDanmakuSettingConfiguration, AWELivePreDanmakuSettingSliderView;

@interface AWELivePreDanmakuSettingView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *settingContainerView;
@property (retain, nonatomic) AWELivePreDanmakuSettingConfiguration *configuration;
@property (retain, nonatomic) AWELivePreDanmakuSettingSliderView *alphaSlider;
@property (retain, nonatomic) AWELivePreDanmakuSettingSliderView *areaTypeSlider;
@property (retain, nonatomic) AWELivePreDanmakuSettingSliderView *fontSizeSlider;
@property (retain, nonatomic) AWELivePreDanmakuSettingSliderView *speedLevelSlider;
@property (nonatomic) BOOL settingChangeFromResetClick;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ areaTypeDidChange;
@property (copy, nonatomic) id /* block */ fontSizeTypeDidChange;
@property (copy, nonatomic) id /* block */ alphaValueDidChange;
@property (copy, nonatomic) id /* block */ speedTypeDidChange;
@property (copy, nonatomic) id /* block */ clickClose;
@property (copy, nonatomic) id /* block */ clickReset;

- (void)setupAlphaSettingView;
- (void)setupAreaSettingView;
- (void)setupFontSizeSettingView;
- (void)setupSpeedSettingView;
- (void)trackPreStreamDanmakuSettingClickWithType:(id)a0;
- (void)trackPreStreamDanmakuSettingChangeWithItemType:(id)a0 slideFromLevel:(id)a1 slideToLevel:(id)a2;
- (id)createSingleSettingContainerYPosition:(double)a0 control:(id)a1 title:(id)a2 desc:(id)a3 valueChangeBlock:(id /* block */)a4;
- (id)areaTypeIndexFromType:(long long)a0;
- (id)fontSizeDescFromType:(long long)a0;
- (id)speedLevelDescFromLevel:(long long)a0;
- (id)settingTitleLabelWithTitle:(id)a0;
- (id)settingDescLabelWithTitle:(id)a0;
- (void)applyConfig;
- (void).cxx_destruct;
- (void)resetToDefault;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1;
- (void)setupView;

@end
