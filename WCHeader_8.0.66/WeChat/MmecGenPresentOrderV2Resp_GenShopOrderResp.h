@class EcsShopCouponResp, NSString, EcsWxaVipDiscountResp;

@interface MmecGenPresentOrderV2Resp_GenShopOrderResp : WXPBGeneratedMessage

@property (retain, nonatomic) EcsShopCouponResp *couponInfo;
@property (retain, nonatomic) NSString *realWxaproductAppid;
@property (retain, nonatomic) EcsWxaVipDiscountResp *wxaVipDiscountInfo;

+ (void)initialize;

@end
