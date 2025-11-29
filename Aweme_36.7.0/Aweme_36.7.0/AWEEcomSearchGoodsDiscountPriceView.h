@class UILabel, UIImageView;

@interface AWEEcomSearchGoodsDiscountPriceView : UIImageView

@property (retain, nonatomic) UILabel *priceLabel;
@property (retain, nonatomic) UIImageView *rightIconView;

- (void)configWithMerchandise:(id)a0 isSingleColumn:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
