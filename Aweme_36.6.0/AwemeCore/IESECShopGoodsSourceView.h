@class UIImageView, UILabel, CAShapeLayer;

@interface IESECShopGoodsSourceView : UIView

@property (retain, nonatomic) UIImageView *sourceIconImageView;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *arrowIconImageView;
@property (retain, nonatomic) CAShapeLayer *breatheCircleLayer;
@property (retain, nonatomic) CAShapeLayer *breatheAnimationLayer;
@property (nonatomic) BOOL showBreatheAnimation;
@property (nonatomic) BOOL showIconWithoutBreatheAnimation;

- (void)setSourceIcon:(id)a0 text:(id)a1 showArrowIcon:(BOOL)a2;
- (void)p_startBreatheAnimation;
- (void)p_stopBreatheAnimation;
- (void)updateSourceLabelWithColor:(id)a0;
- (void)setSourceIcon:(id)a0 text:(id)a1 showArrowIcon:(BOOL)a2 showIconBorder:(BOOL)a3;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
