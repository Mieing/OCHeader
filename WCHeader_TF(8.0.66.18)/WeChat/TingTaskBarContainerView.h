@class UIImageView, CAGradientLayer, UIView;

@interface TingTaskBarContainerView : UIView

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIView *borderLayerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
