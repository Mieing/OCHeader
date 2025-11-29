@class CAGradientLayer;

@interface AWEEcommerceSearchBannerBackgroundView : UIImageView

@property (readonly, nonatomic) CAGradientLayer *bgGradientLayer;

- (void)updateWithBgImg:(id)a0 bgColor:(id)a1 bgGradientColor:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
