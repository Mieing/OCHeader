@class UIStackView, CAGradientLayer, UIImageView, AWEEcomSearchCouponTagViewUIConfig, UILabel, UIView;

@interface AWEEcomSearchCouponTagView : UIView

@property (retain, nonatomic) UIStackView *tagStackView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *labelBackground;
@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) AWEEcomSearchCouponTagViewUIConfig *config;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)setTagWithText:(id)a0 andIconUrl:(id)a1 tagStyle:(long long)a2;
- (void)setTagUIWithConfig:(id)a0;
- (void)updateLabelConstraintWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;

@end
