@class UIView, AWESearchSynthesisNovelSlider, NSArray, NSString, UIButton, DUXButton, UILabel, AWESearchSynthesisNovelBookSettingConfig;
@protocol AWESearchSynthesisNovelSettingViewDelegate;

@interface AWESearchSynthesisNovelSettingView : UIView <AWESearchSynthesisNovelSliderDelegate>

@property (retain, nonatomic) UILabel *lightLabel;
@property (retain, nonatomic) AWESearchSynthesisNovelSlider *lightSlider;
@property (retain, nonatomic) UILabel *biggerFontLabel;
@property (retain, nonatomic) UILabel *fontSizeLabel;
@property (retain, nonatomic) DUXButton *reduceFontSizeBtn;
@property (retain, nonatomic) DUXButton *enlargeFontSizeBtn;
@property (retain, nonatomic) UILabel *lessFontLabel;
@property (retain, nonatomic) UIButton *backgroundDefaultBtn;
@property (retain, nonatomic) UIButton *backgroundYellowBtn;
@property (retain, nonatomic) UIButton *backgroundGreenBtn;
@property (retain, nonatomic) UIButton *backgroundBlueBtn;
@property (retain, nonatomic) UIButton *backgroundDarkModeBtn;
@property (retain, nonatomic) NSArray *backgroundBtnArr;
@property (retain, nonatomic) UILabel *pageTurnerStyleLabel;
@property (retain, nonatomic) UIButton *pageTurnerStyleRealityBtn;
@property (retain, nonatomic) UIButton *pageTurnerStyleSlideBtn;
@property (retain, nonatomic) UIButton *pageTurnerStyleParallelBtn;
@property (retain, nonatomic) UIButton *pageTurnerStyleVerticalBtn;
@property (retain, nonatomic) NSArray *pageTurnerStyleBtnArr;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) AWESearchSynthesisNovelBookSettingConfig *configData;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL isApppendNativeReader;
@property (weak, nonatomic) id<AWESearchSynthesisNovelSettingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)slider:(id)a0 valueDidChanged:(float)a1;
- (void)updateWithConfigData:(id)a0;
- (void)onBookInsertedViewBackgroundConfigChange:(id)a0;
- (void)onFontSizeChangeBtnClicked:(id)a0;
- (void)onPageTurnerStyleSelect:(id)a0;
- (void)onBackgroundColorSelect:(id)a0;
- (id)initWithCustomFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isAppendNativeReader:(BOOL)a1;
- (id)getColorWithColor:(id)a0 alpha:(double)a1;
- (double)mapFontSizeFromVirtual:(long long)a0;
- (long long)mapFontSizeFromValue:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
