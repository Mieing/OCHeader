@class UIImageView, IESECGoodsPriceLabel, UIView;

@interface IESECShopRecommendMallProductItem : UIView

@property (retain, nonatomic) UIImageView *productsImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *priceBottom;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
