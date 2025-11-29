@class CAGradientLayer;

@interface AWEChallengeDetailBackgroundColorView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;

- (void)updateBackgroundColorViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 centerPercent:(double)a1 startColor:(id)a2 centerColor:(id)a3 endColor:(id)a4;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
