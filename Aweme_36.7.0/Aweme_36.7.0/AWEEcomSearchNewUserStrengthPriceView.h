@class UIImageView, UILabel;

@interface AWEEcomSearchNewUserStrengthPriceView : UIView

@property (retain, nonatomic) UIImageView *trendingImgView;
@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UILabel *originPriceLabel;
@property (retain, nonatomic) UIImageView *priceTagView;
@property (retain, nonatomic) UIImageView *rightIconView;

+ (double)viewHeightWithMerchandise:(id)a0;

- (void)configWithMerchandise:(id)a0;
- (id)makePriceAttributeText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
