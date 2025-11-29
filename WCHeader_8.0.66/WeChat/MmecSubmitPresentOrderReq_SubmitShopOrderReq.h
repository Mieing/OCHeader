@class NSString, EcsShopCouponReq, EcsWxaVipDiscountReq;

@interface MmecSubmitPresentOrderReq_SubmitShopOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *realWxaproductAppid;
@property (retain, nonatomic) EcsShopCouponReq *couponInfo;
@property (retain, nonatomic) EcsWxaVipDiscountReq *wxaVipDiscountInfo;

+ (void)initialize;

@end
