@class UIImageView, UIView;

@interface IESLiveBrightnessVolumnView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *sliderBackground;
@property (retain, nonatomic) UIView *sliderView;
@property (nonatomic) float value;
@property (nonatomic) float minimumValue;
@property (nonatomic) float maximumValue;

- (void)updateIconImage:(id)a0;
- (void)calculateValueAndLayout:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)tintColorDidChange;
- (void)updateValue:(double)a0;

@end
