@class UIColor, CAGradientLayer, UIView;

@interface IESLiveVIPProgressBarView : UIView

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) CAGradientLayer *gradient;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (retain, nonatomic) UIColor *progressStokeBackgroundColor;
@property (nonatomic) double progressStokeWidth;
@property (nonatomic) double borderRadius;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
