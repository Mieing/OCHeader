@class UIStackView, NSString, UISlider, CAShapeLayer, AWEBigFontSelectionSliderView, DUXSwitch, UILabel, DUXDivider;

@interface AWEBigFontSettingBottomView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIStackView *contentView;
@property (retain, nonatomic) UILabel *fontFollowSystemTitle;
@property (retain, nonatomic) UILabel *fontFollowSystemSubtitle;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) AWEBigFontSelectionSliderView *slider;
@property (retain, nonatomic) UISlider *dux_slider;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) DUXSwitch *fontFollowSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;

- (long long)currentSelectedIndex;
- (id)aAWEPadBizUIAdapter;
- (id)fontModeTitles;
- (BOOL)adapterPadGridEnable;
- (id)initWithInitialIndex:(unsigned long long)a0 switchStatus:(BOOL)a1 switchBlock:(id /* block */)a2 selectBlock:(id /* block */)a3;
- (void)updateFontSelectWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)titles;
- (void)setupView;

@end
