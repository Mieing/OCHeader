@class UIImageView, UILabel, CAGradientLayer;

@interface AWECardCouponFoldListCollectionViewCell : AWECardCouponCollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UILabel *couponNameLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *validDateLabel;
@property (retain, nonatomic) UIImageView *statusLabelBackgroundImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

+ (id)identifier;

- (void)setCouponStyleForValid:(BOOL)a0;
- (void)p_updateTextShadowWithIsDefaultImg:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithModel:(id)a0;

@end
