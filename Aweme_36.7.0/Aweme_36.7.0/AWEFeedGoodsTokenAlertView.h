@class UILabel, IESECGoodsPriceLabel, UIView;

@interface AWEFeedGoodsTokenAlertView : UIView

@property (retain, nonatomic) UIView *ecommerceContanierView;
@property (retain, nonatomic) UILabel *saleLabel;
@property (retain, nonatomic) IESECGoodsPriceLabel *priceLabel;

- (id)initWithPrice:(id)a0 sale:(id)a1 maxPrice:(id)a2;
- (void)configUIWithPrice:(id)a0 sale:(id)a1 maxPrice:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
