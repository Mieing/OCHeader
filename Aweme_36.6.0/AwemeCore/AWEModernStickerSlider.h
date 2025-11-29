@class UIColor, NSTimer, UIImpactFeedbackGenerator, UIView;

@interface AWEModernStickerSlider : AWESlider

@property (retain, nonatomic) UIView *defaultIndicator;
@property (retain, nonatomic) UIView *bgMaskView;
@property (retain, nonatomic) UIView *backgroundTrackView;
@property (retain, nonatomic) UIView *placeHolderView;
@property (retain, nonatomic) NSTimer *hideLabelTimer;
@property (nonatomic) float lastValue;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedBackGenertor;
@property (nonatomic) BOOL showDefaultIndicator;
@property (nonatomic) BOOL enableSliderAdsorbToDefault;
@property (nonatomic) double defaultIndicatorPosition;
@property (nonatomic) double minimumAdsorptionDistance;
@property (nonatomic) double originPosition;
@property (retain, nonatomic) UIColor *rangeMinimumTrackColor;
@property (retain, nonatomic) UIColor *rangeMaximumTrackColor;

- (void)setupGesture;
- (void)setupDefaultState;
- (void)p_vibrate;
- (void)rangeSliderValueChange:(id)a0 forEvent:(id)a1;
- (void)setupValueDisplayBlock;
- (void)p_hideLabel;
- (void)p_updateRange;
- (void)p_showLabel;
- (void)p_adsorptionIfNeed;
- (void)p_hideLabelWithTimer;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setValue:(float)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setupUI;
- (void)handleValueChanged;

@end
