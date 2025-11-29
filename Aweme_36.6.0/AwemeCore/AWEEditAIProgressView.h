@class CAGradientLayer, UIColor, NSArray, UIView, CABasicAnimation;

@interface AWEEditAIProgressView : UIView

@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CABasicAnimation *basicAnimation;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) UIColor *backgroundProgressColor;
@property (retain, nonatomic) NSArray *colorArr;
@property (nonatomic) double progressCornerRadius;

- (void)updateProgress:(double)a0 withTime:(long long)a1 completion:(id /* block */)a2;
- (void)cancelPreviousProgressAnimation;
- (void)updateProgress:(double)a0 withTime:(long long)a1;
- (void)updateProgress:(double)a0 withBreakPointPercent:(double)a1 firstDuration:(double)a2 secondDuration:(double)a3;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;

@end
