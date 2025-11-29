@class IESLivePlaybackDanmakuSettingSliderContaniner, IESLivePlaybackDanmakuSettingStore, HTSEventContext, IESLivePlaybackComponentContext, UIScrollView, UIView, UILabel;

@interface IESLivePlaybackDanmakuPortraitSettingPanelView : UIView

@property (retain, nonatomic) IESLivePlaybackDanmakuSettingStore *store;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingSliderContaniner *sliderContainer;
@property (nonatomic) BOOL settingsDisabled;
@property (nonatomic) double scrollHeight;
@property (nonatomic) double scrollOffset;
@property (nonatomic) BOOL isWidth414;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (weak, nonatomic) UIView *lastSettingContainer;
@property (copy, nonatomic) id /* block */ resetSetting;
@property (copy, nonatomic) id /* block */ alphaPercentValueChanged;
@property (copy, nonatomic) id /* block */ fontSizeTpyeChanged;
@property (copy, nonatomic) id /* block */ speedTypeChanged;
@property (copy, nonatomic) id /* block */ outerAreaType;
@property (copy, nonatomic) id /* block */ fontSizeChanged;
@property (copy, nonatomic) id /* block */ areaChanged;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)setupTitleContainer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;
- (id)p_titleLabelForSettingPanelWithTitle:(id)a0;
- (void)p_updateSwitchStyle:(id)a0;
- (void)setupSliderContainer;
- (void)layoutPanelView;
- (void)alphaSliderValueChanged:(unsigned long long)a0;
- (void)areaSliderValueChanged:(unsigned long long)a0;
- (void)speedSliderValueChanged:(unsigned long long)a0;
- (void)fontSizeSliderValueChanged:(unsigned long long)a0;
- (double)channelHeightFromFontSizeType:(long long)a0;
- (void)changeAreaLineNum:(double)a0;
- (void)changeAreaLineNum:(double)a0 withVal:(unsigned long long)a1;
- (void)insertView:(id)a0 withHeight:(double)a1;
- (void).cxx_destruct;
- (void)applyConfiguration;
- (void)setupView;
- (void)resetConfiguration;

@end
