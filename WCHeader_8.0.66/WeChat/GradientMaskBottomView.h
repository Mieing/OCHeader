@class CAGradientLayer, UIView;

@interface GradientMaskBottomView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double paddingTop;
@property (nonatomic) double paddingBottom;

- (id)initWithContentView:(id)a0;
- (double)heightWithoutSafeAreaInset;
- (void)addGradientMask;
- (void)didMoveToSuperview;
- (void)safeAreaInsetsDidChange;
- (void)updateLayout;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutMaskBottomOrigin;
- (void).cxx_destruct;

@end
