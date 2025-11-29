@class UIColor, AWESlider, UIImageView, UIView, UIPanGestureRecognizer, CALayer;

@interface AWEVerticalSlider : UIView

@property (retain, nonatomic) AWESlider *slider;
@property (retain, nonatomic) UIView *sliderBackgroundContainerView;
@property (retain, nonatomic) UIView *sliderBackgroundView;
@property (retain, nonatomic) UIView *sliderForegroundView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UIImageView *displayImageView;
@property (nonatomic) double lastSliderValue;
@property (retain, nonatomic) CALayer *foregroundLayer;
@property (retain, nonatomic) UIColor *sliderBackgroundColor;
@property (retain, nonatomic) UIColor *sliderForegroundColor;

- (void)setSliderValue:(float)a0 animated:(BOOL)a1 forceUpdate:(BOOL)a2;
- (void)layoutForegroundView;
- (void)p_changeColor:(double)a0;
- (void)updateMaximumValue:(double)a0;
- (void)configMinimumValue:(double)a0 maximumValue:(double)a1 defaultValue:(double)a2;
- (void)setupDisplayImageViewConfig:(id)a0;
- (void)setupDefaultValues;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityIncrement;
- (void)layoutSubviews;
- (void)setup;
- (id)accessibilityValue;
- (void)didPan:(id)a0;
- (void)setSliderValue:(float)a0 animated:(BOOL)a1;

@end
