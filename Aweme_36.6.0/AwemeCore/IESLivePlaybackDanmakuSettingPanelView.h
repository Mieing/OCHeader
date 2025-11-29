@class NSString, IESLivePlaybackDanmakuSettingStore, HTSEventContext, IESLivePlaybackComponentContext, UIScrollView, UIView, IESLivePlaybackDanmakuSettingSliderContaniner;

@interface IESLivePlaybackDanmakuSettingPanelView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingStore *store;
@property (nonatomic) BOOL settingsDisabled;
@property (retain, nonatomic) UIView *titleContainer;
@property (retain, nonatomic) UIView *blockContainer;
@property (nonatomic) double scrollHeight;
@property (nonatomic) double scrollOffset;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLivePlaybackComponentContext *componentContext;
@property (retain, nonatomic) IESLivePlaybackDanmakuSettingSliderContaniner *sliderContainer;
@property (weak, nonatomic) UIView *lastSettingContainer;
@property (copy, nonatomic) id /* block */ outerAreaType;
@property (copy, nonatomic) id /* block */ resetSetting;
@property (copy, nonatomic) id /* block */ alphaPercentValueChanged;
@property (copy, nonatomic) id /* block */ fontSizeTpyeChanged;
@property (copy, nonatomic) id /* block */ giftDanmuSwitch;
@property (copy, nonatomic) id /* block */ speedTypeChanged;
@property (copy, nonatomic) id /* block */ areaChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)setupTitleContainer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 store:(id)a1;
- (id)p_titleLabelForSettingPanelWithTitle:(id)a0;
- (void)setupSliderContainer;
- (void)layoutPanelView;
- (void)alphaSliderValueChanged:(unsigned long long)a0;
- (void)areaSliderValueChanged:(unsigned long long)a0;
- (void)speedSliderValueChanged:(unsigned long long)a0;
- (void)fontSizeSliderValueChanged:(unsigned long long)a0;
- (double)channelHeightFromFontSizeType:(long long)a0;
- (void)changeAreaLineNum:(double)a0;
- (void)changeAreaLineNum:(double)a0 withVal:(unsigned long long)a1;
- (void)closePopUpView;
- (id)createSeparatorBG;
- (id)p_titleLabelForSectionContainerWithTitle:(id)a0;
- (void).cxx_destruct;
- (void)applyConfiguration;
- (void)setupUI;
- (void)setupItemViews;
- (void)resetConfiguration;

@end
