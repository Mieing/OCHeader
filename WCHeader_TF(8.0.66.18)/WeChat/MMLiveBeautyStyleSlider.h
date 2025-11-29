@class MMLiveBeautySlider, UIImageView, UILabel, UIView;

@interface MMLiveBeautyStyleSlider : UIView

@property (retain, nonatomic) MMLiveBeautySlider *sliderView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *backgroundStripe;
@property (retain, nonatomic) UIView *backgroundProgressStripe;
@property (retain, nonatomic) UIView *backgroundDefaultValueDot;
@property (retain, nonatomic) UILabel *progressTipLabel;
@property (nonatomic) int minValue;
@property (nonatomic) int maxValue;
@property (weak, nonatomic) UIImageView *sliderThumbImageView;
@property (nonatomic) BOOL hasCheckedSliderThumbImageView;
@property (nonatomic) float defaultValue;
@property (nonatomic) float value;
@property (nonatomic) SEL valueChangedAction;
@property (weak, nonatomic) id valueChangedTarget;
@property (nonatomic) SEL touchUpAction;
@property (weak, nonatomic) id touchUpTarget;
@property (nonatomic) BOOL hideProgressTip;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutProgressTipLabel;
- (void)layoutBackgroundProgressStripe;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)addEndTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setThumbImage:(id)a0 forState:(unsigned long long)a1;
- (void)onSliderValueChanged:(id)a0;
- (void)onSliderTouchUp:(id)a0;
- (void).cxx_destruct;

@end
