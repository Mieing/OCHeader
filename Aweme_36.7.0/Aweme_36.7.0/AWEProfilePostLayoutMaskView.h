@class UIView, CAShapeLayer;

@interface AWEProfilePostLayoutMaskView : UIView

@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIView *cornerView;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL bottomHasCorner;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shadowColor:(id)a1 cornerRadius:(double)a2;
- (void).cxx_destruct;
- (id)containerView;
- (void)layoutSubviews;

@end
