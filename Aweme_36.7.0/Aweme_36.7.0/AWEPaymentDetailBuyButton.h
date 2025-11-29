@class UIImage, CAGradientLayer;

@interface AWEPaymentDetailBuyButton : UIButton

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL alwaysUseDarkStyle;
@property (retain, nonatomic) UIImage *iconImage;

+ (id)buyButton;

- (void)changeButtonStyleType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
