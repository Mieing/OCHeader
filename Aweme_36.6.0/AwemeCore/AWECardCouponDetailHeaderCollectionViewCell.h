@class UIImageView, UILabel, CAGradientLayer;

@interface AWECardCouponDetailHeaderCollectionViewCell : AWECardCouponCollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *backgroundMaskImageView;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *couponNameLabel;
@property (retain, nonatomic) UILabel *merchantNameLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;

@end
