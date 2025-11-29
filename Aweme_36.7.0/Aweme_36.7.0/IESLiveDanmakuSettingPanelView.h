@class UIView, UILabel, UISwitch, UISlider, IESLiveGameDanmakuAreaSettingItemButton, IESLiveDanmakuSettingPanelViewModel, HTSLiveGradientBackgroundView, NSArray, NSString, IESLiveDanmakuSettingsFontSizeButton, UIScrollView;

@interface IESLiveDanmakuSettingPanelView : UIView <IESLiveDanmakuSettingViewProtocol>

@property (retain, nonatomic) IESLiveDanmakuSettingPanelViewModel *viewModel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) IESLiveGameDanmakuAreaSettingItemButton *lastSelectAreaBtn;
@property (retain, nonatomic) IESLiveDanmakuSettingsFontSizeButton *lastSelectFontSizeBtn;
@property (nonatomic) BOOL settingsDisabled;
@property (retain, nonatomic) UISwitch *lotterySwitch;
@property (retain, nonatomic) UIView *lotterySwitchContainer;
@property (nonatomic) BOOL lotterySwitchEnable;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UIView *areaSettingContainer;
@property (retain, nonatomic) UIView *fontSizeSettingContainer;
@property (retain, nonatomic) UIView *alphaSettingContainer;
@property (retain, nonatomic) UIView *giftSwitchContainer;
@property (retain, nonatomic) UISlider *alphaSlider;
@property (retain, nonatomic) UILabel *alphaValueLabel;
@property (retain, nonatomic) UISwitch *giftSwitch;
@property (retain, nonatomic) HTSLiveGradientBackgroundView *gradientView;
@property (copy, nonatomic) NSArray *areaSettingItems;
@property (copy, nonatomic) NSArray *fontSizeSettingBtns;
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
- (void)setupGiftSwitchContainer;
- (void)setupLotterySwitchContainer;
- (void)setupDeliverTapControl;
- (void)deliverTap;
- (id)p_titleLabelForSettingPanelWithTitle:(id)a0;
- (void)swithAreaSetting:(id)a0;
- (id)p_fontSizeSettingBtnForSettingPanelWithTitle:(id)a0;
- (void)alphaSliderValudeChanged:(id)a0;
- (void)alphaSliderValudeChangeEnd:(id)a0;
- (void)giftSwitchChanged:(id)a0;
- (void)p_updateSwitchStyle:(id)a0;
- (void)lotterySwitchChanged:(id)a0;
- (void)disableSettings;
- (void)enableSettings;
- (void)selectFontSize:(id)a0;
- (void).cxx_destruct;
- (void)updateSettings:(BOOL)a0;
- (void)applyConfiguration;
- (void)setupUI;
- (void)setupItemViews;
- (void)resetConfiguration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;

@end
