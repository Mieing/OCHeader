@class EcsShopCouponResp, NSString, EcsWxaVipDiscountResp;

@interface MmecSubmitPresentOrderResp_SubmitShopOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) EcsShopCouponResp *couponInfo;
@property (retain, nonatomic) NSString *realWxaproductAppid;
@property (retain, nonatomic) EcsWxaVipDiscountResp *wxaVipDiscountInfo;

+ (void)initialize;

@end
