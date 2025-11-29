@class UILabel, CAGradientLayer;

@interface AWEPaymentVideoTagView : UIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UILabel *infoLabel;

- (void)configureUI:(long long)a0;
- (void)setupBackground;
- (void)setupBackgroundColor:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;

@end
