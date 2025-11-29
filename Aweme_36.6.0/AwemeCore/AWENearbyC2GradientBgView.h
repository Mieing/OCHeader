@class CAGradientLayer, UIView;

@interface AWENearbyC2GradientBgView : UIView

@property (retain, nonatomic) CAGradientLayer *bgGradientLayer;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isExpanding;

+ (BOOL)isFreezeTopActivityBg;

- (void)switchToGradient:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
