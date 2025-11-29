@class NSString, NSMutableArray, EcsWxaVipDiscountReq;

@interface MmecGenPresentOrderV2Req_GenShopOrderReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *realWxaproductAppid;
@property (retain, nonatomic) NSMutableArray *productInfos;
@property (retain, nonatomic) EcsWxaVipDiscountReq *wxaVipDiscountInfo;

+ (void)initialize;

@end
