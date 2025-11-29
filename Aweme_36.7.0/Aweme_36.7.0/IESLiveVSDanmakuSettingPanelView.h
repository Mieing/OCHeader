@class UIView, NSString, NSArray, IESLiveGameDanmakuAreaSettingItemButton, HTSLiveGradientBackgroundView, IESLiveDanmakuSettingToolBar, IESLiveDanmakuSettingSlider, IESLiveVSDanmakuSettingPanelViewModel, UIButton, UILabel, UIScrollView;

@interface IESLiveVSDanmakuSettingPanelView : UIView <IESLiveDanmakuSettingViewProtocol>

@property (retain, nonatomic) IESLiveVSDanmakuSettingPanelViewModel *viewModel;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UIButton *resetBtn;
@property (retain, nonatomic) UIView *areaSettingContainer;
@property (retain, nonatomic) UIView *fontSizeSettingContainer;
@property (retain, nonatomic) UIView *alphaSettingContainer;
@property (retain, nonatomic) UIView *blockSettingContainer;
@property (retain, nonatomic) IESLiveDanmakuSettingSlider *alphaSlider;
@property (retain, nonatomic) UILabel *alphaValueLabel;
@property (retain, nonatomic) IESLiveDanmakuSettingToolBar *blockToolbar;
@property (retain, nonatomic) IESLiveDanmakuSettingSlider *fontSizeSlider;
@property (retain, nonatomic) UILabel *fontSizeValueLabel;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) UIView *contentView;
@property (copy, nonatomic) NSArray *areaSettingItems;
@property (retain, nonatomic) IESLiveGameDanmakuAreaSettingItemButton *lastSelectAreaBtn;
@property (nonatomic, getter=isSettingsDisabled) BOOL settingsDisabled;
@property (copy, nonatomic) id /* block */ carnivalDanmuSwitch;
@property (nonatomic) unsigned long long supportSettingType;
@property (copy, nonatomic) id /* block */ outerAreaType;
@property (copy, nonatomic) id /* block */ resetSetting;
@property (copy, nonatomic) id /* block */ giftDanmuSwitch;
@property (copy, nonatomic) id /* block */ lotteryDanmuSwitch;
@property (copy, nonatomic) id /* block */ areaTypeChanged;
@property (copy, nonatomic) id /* block */ fontSizeTpyeChanged;
@property (copy, nonatomic) id /* block */ alphaPercentValueChanged;
@property (copy, nonatomic) id /* block */ alphaPercentValueChangeEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupTitleContainer;
- (void)setupAreaSettingContainer;
- (void)setupFontSizeSettingContainer;
- (void)setupAlphaSettingContainer;
- (void)setupDeliverTapControl;
- (void)deliverTap;
- (void)swithAreaSetting:(id)a0;
- (void)alphaSliderValudeChanged:(long long)a0;
- (void)disableSettings;
- (void)enableSettings;
- (void)setupBlockSettingContainer;
- (id)titleLabelForSettingPanelWithTitle:(id)a0 size:(double)a1 weight:(double)a2 textColor:(id)a3;
- (void)updateFontSizeLabelWithFontSizeType:(long long)a0;
- (id)configBlockItems;
- (void)fontSizeSliderValudeChanged:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings:(BOOL)a0;
- (void)applyConfiguration;
- (id)fontSize;
- (void)setupUI;
- (void)setupItemViews;
- (void)resetConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
