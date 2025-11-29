@class UIImageView, CAShapeLayer, UILabel, UIView;

@interface AWEImageAndTitleBubble : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) CAShapeLayer *stroke;
@property (nonatomic) struct CGPoint { double x; double y; } adjustPoint;
@property (nonatomic) BOOL isDarkBackGround;
@property (nonatomic) long long direction;
@property (nonatomic) struct CGPoint { double x; double y; } scaleAnchorPoint;

- (void)dismissWithAnimated:(BOOL)a0;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 image:(id)a2 forView:(id)a3 inContainerView:(id)a4 anchorAdjustment:(struct CGPoint { double x0; double x1; })a5 direction:(long long)a6 isDarkBackGround:(BOOL)a7;
- (void)showWithAnimated:(BOOL)a0;
- (void)setupUIWithTitle:(id)a0 subTitle:(id)a1 image:(id)a2 forView:(id)a3 anchorAdjustment:(struct CGPoint { double x0; double x1; })a4 direction:(long long)a5;
- (double)widthOfTitle:(id)a0;
- (double)widthOfSubTitle:(id)a0;
- (void)setupBgViewWithTitleWidth:(double)a0;
- (void)makeMaskLayerWithDirection:(long long)a0 anchorPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)animationForShow:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
