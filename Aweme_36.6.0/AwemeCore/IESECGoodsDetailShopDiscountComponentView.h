@class IESECGoodsActivityShopDiscountView;

@interface IESECGoodsDetailShopDiscountComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECGoodsActivityShopDiscountView *discountInfoView;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)openMarket;
- (void).cxx_destruct;

@end
