@class UIColor, CAGradientLayer, UIView;

@interface BTFinderItemBlurView : MMUIView

@property (retain, nonatomic) CAGradientLayer *colorGradientLayer;
@property (retain, nonatomic) CAGradientLayer *blurGradientLayer;
@property (retain, nonatomic) UIView *blurMaskView;
@property (retain, nonatomic) UIColor *mainColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)refreshBlurGradientLayer;
- (void).cxx_destruct;

@end
