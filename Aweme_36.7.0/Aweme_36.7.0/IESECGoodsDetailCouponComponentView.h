@class IESECGoodsServiceCouponView;

@interface IESECGoodsDetailCouponComponentView : IESECGoodsDetailBaseComponentView

@property (retain, nonatomic) IESECGoodsServiceCouponView *couponInfoView;

+ (BOOL)componentViewShouldShow:(id)a0 style:(long long)a1;
+ (double)componentViewHeight:(id)a0 style:(long long)a1;

- (void)updateWithParameters:(id)a0;
- (void)openCouponPanel;
- (id)initWithParameters:(id)a0 style:(long long)a1 tracker:(id)a2;
- (void)updateLayoutWithComponentsViewStyle:(long long)a0;
- (void).cxx_destruct;

@end
