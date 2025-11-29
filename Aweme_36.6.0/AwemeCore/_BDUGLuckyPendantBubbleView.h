@class CAGradientLayer, CAShapeLayer;

@interface _BDUGLuckyPendantBubbleView : UIView

@property (nonatomic) unsigned long long arrowDirection;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)__updateLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
