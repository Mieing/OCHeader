@class IESLivePlaybackDanmakuSettingSlider, IESLivePlaybackDanmakuSettingStore, UIView, UILabel;

@interface IESLivePlaybackDanmakuSettingSliderContaniner : UIView

@property (retain, nonatomic) IESLivePlaybackDanmakuSettingStore *store;
@property (retain, nonatomic) UIView *alphaSettingContainer;
@property (retain, nonatomic) UIView *speedSettingContainer;
@property (retain, nonatomic) UIView *areaSettingContainer;
@property (retain, nonatomic) UIView *fontSizeSettingContainer;
@property (nonatomic) BOOL isPortraitStream;
@property (nonatomic) BOOL isWidth414;
@property (retain, nonatomic) UILabel *fontSizeLabel;
@property (retain, nonatomic) UILabel *areaValueLabel;
@property (retain, nonatomic) UILabel *alphaValueLabel;
@property (retain, nonatomic) UILabel *speedValueLabel;
@property (retain, nonatomic) UILabel *lineNumLabel;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingSlider *fontSizeSlider;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingSlider *speedSlider;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingSlider *areaSlider;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingSlider *alphaSlider;
@property (copy, nonatomic) id /* block */ alphaSliderValueChanged;
@property (copy, nonatomic) id /* block */ fontSizeSliderValueChanged;
@property (copy, nonatomic) id /* block */ speedSliderValueChanged;
@property (copy, nonatomic) id /* block */ areaSliderValueChanged;

- (void)setupAreaSettingContainer;
- (void)setupFontSizeSettingContainer;
- (void)setupAlphaSettingContainer;
- (id)p_titleLabelForSettingPanelWithTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPortraitStream:(BOOL)a1 store:(id)a2;
- (id)p_titleLabelForSectionContainerWithTitle:(id)a0;
- (void)setupUIWithIsPortraitStream:(BOOL)a0;
- (void)layoutWithIsPortraitStream:(BOOL)a0;
- (void)setupSpeedSettingContainer;
- (void)setupPortraitAlphaSettingContainer;
- (void)setupPortraitAreaSettingContainer;
- (void)setupPortraitFontSizeSettingContainer;
- (void)setupPortraitSpeedSettingContainer;
- (long long)indexForDanmakuFontSizeType:(long long)a0;
- (void)p_updateFontSizeLabelWithFontSizeType:(long long)a0;
- (void)p_updateSpeedLabelWithSpeedType:(long long)a0;
- (void)updateFontSizeAtIndex:(unsigned long long)a0;
- (void)layoutForPortraitStream;
- (void)layoutForLandscapeStream;
- (long long)danmakuFontSizeTypeAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)applyConfiguration;

@end
