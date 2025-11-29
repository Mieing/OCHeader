@class UIView, NSString, AWEModernStickerSlider, AWEModernStickerSliderInnerModel, ACCGradientView, UIVisualEffectView, UIButton;
@protocol AWEModernStickerSliderViewDelegate;

@interface AWEModernStickerSliderView : UIView <AWESliderDelegate>

@property (nonatomic) long long mode;
@property (retain, nonatomic) AWEModernStickerSliderInnerModel *beautyModel;
@property (retain, nonatomic) AWEModernStickerSliderInnerModel *filterModel;
@property (retain, nonatomic) AWEModernStickerSlider *slider;
@property (retain, nonatomic) ACCGradientView *gradientView;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIButton *beautyButton;
@property (retain, nonatomic) UIButton *filterButton;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) UIView *dotView;
@property (nonatomic) BOOL isWhiteDotEnabled;
@property (nonatomic) BOOL isBlackBackGroundEnabled;
@property (nonatomic) BOOL shouldHideGradientView;
@property (weak, nonatomic) id<AWEModernStickerSliderViewDelegate> sliderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)slider:(id)a0 valueDidChanged:(float)a1;
- (void)slider:(id)a0 didFinishSlidingWithValue:(float)a1;
- (void)setupGesture;
- (id)createDotView;
- (void)showGradientBackground;
- (void)hideGradientBackground;
- (void)setupDefaultUIState;
- (void)switchToBeautySlider;
- (void)clickBeautyButton;
- (void)clickFilterButton;
- (void)configSliderWithInnerModel:(id)a0;
- (void)switchDotToBeauty;
- (void)switchDotToFilter;
- (void)setWhiteDotEnabled:(BOOL)a0;
- (void)updateLayoutForBlackStyle;
- (void)setBlackBackGroundEnabled:(BOOL)a0;
- (void)updateLayoutForWhiteStyle;
- (void)switchToFilterSlider;
- (void)switchUIStyleBlur;
- (void)switchUIStyleBlack;
- (void)switchUIStyleWhite;
- (void)clearConfigOfBeautyAndFilter;
- (void)configBeautySliderWithValue:(id)a0 defaultValue:(id)a1 minValue:(id)a2 maxValue:(id)a3;
- (void)configFilterSliderWithValue:(id)a0 defaultValue:(id)a1 minValue:(id)a2 maxValue:(id)a3;
- (id)currentFilterValue;
- (id)currentBeautyValue;
- (void).cxx_destruct;
- (long long)currentMode;
- (id)init;
- (void)setupUI;

@end
