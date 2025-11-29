@class CAGradientLayer, MMLiveBeautySlider, UILabel, UIView, UITapGestureRecognizer;

@interface MMFinderLiveBeautyNewStyleSlider : UIView

@property (retain, nonatomic) MMLiveBeautySlider *sliderView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *backgroundStripe;
@property (retain, nonatomic) UIView *backgroundProgressStripe;
@property (retain, nonatomic) UIView *backgroundDefaultValueDot;
@property (retain, nonatomic) UILabel *progressTipLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UITapGestureRecognizer *disableDragStatusHandler;
@property (nonatomic) BOOL isZoom;
@property (nonatomic) BOOL impactOnReachingDefault;
@property (nonatomic) float defaultValue;
@property (nonatomic) float value;
@property (readonly, nonatomic) float valueInRange;
@property (nonatomic) int minValue;
@property (nonatomic) int maxValue;
@property (nonatomic) SEL valueChangedAction;
@property (weak, nonatomic) id valueChangedTarget;
@property (nonatomic) SEL touchUpAction;
@property (weak, nonatomic) id touchUpTarget;
@property (nonatomic) SEL touchDownAction;
@property (weak, nonatomic) id touchDownTarget;
@property (nonatomic) BOOL disableDrag;
@property (nonatomic) BOOL hideProgressTip;
@property (nonatomic) BOOL disableProgressLabelZoomingMoveVertical;
@property (copy, nonatomic) id /* block */ disableDragStatusClickAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)sliderInnerPadding;
- (void)layoutSubviews;
- (void)layoutProgressTipLabel;
- (void)layoutBackgroundProgressStripe;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)addEndTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setThumbImage:(id)a0 forState:(unsigned long long)a1;
- (void)onDisableDragStatusClick;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onSliderValueChanged:(id)a0;
- (void)onSliderTouchUp:(id)a0;
- (void)onSliderTouchDown:(id)a0;
- (void)onSliderTouchCancel:(id)a0;
- (void).cxx_destruct;

@end
