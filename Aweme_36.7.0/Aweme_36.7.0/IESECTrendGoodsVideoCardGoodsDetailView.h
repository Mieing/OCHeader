@class UIImageView, UILabel, IESECGoodsPriceLabel;

@interface IESECTrendGoodsVideoCardGoodsDetailView : UIView

@property (retain, nonatomic) UIImageView *goodsView;
@property (retain, nonatomic) UILabel *goodsNameLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (void)updateWithProductModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
