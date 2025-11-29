@class UIColor, CAGradientLayer;

@interface AWEHotSpotBlurView : UIView

@property (nonatomic) long long direction;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;

- (id)initWithDirection:(long long)a0 StartColor:(id)a1 endColor:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
