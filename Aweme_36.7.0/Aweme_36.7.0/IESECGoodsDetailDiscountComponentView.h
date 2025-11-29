@class IESECGoodsActivityCouponView;

@interface IESECGoodsDetailDiscountComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECGoodsActivityCouponView *discountInfoView;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)openCouponPanel;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void).cxx_destruct;

@end
