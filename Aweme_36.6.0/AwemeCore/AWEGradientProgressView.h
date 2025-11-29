@class CAGradientLayer, UIColor, NSArray, UIView, CABasicAnimation;

@interface AWEGradientProgressView : UIView

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CABasicAnimation *basicAnimation;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) UIColor *backgroundProgressColor;
@property (retain, nonatomic) NSArray *colorArr;

- (void)updateProgress:(double)a0 withTime:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
