@class EcsOrderCouponInfo, NSString, EcsWxaVipInfo, EcsOrderBulkBuyInfo, EcsSubPayInfo, NSMutableArray, EcsPriceInfo;

@interface EcsShopOrderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *orderProductInfo;
@property (retain, nonatomic) EcsOrderCouponInfo *orderCouponInfo;
@property (nonatomic) unsigned long long bizuin;
@property (retain, nonatomic) EcsPriceInfo *priceInfo;
@property (retain, nonatomic) EcsSubPayInfo *payInfo;
@property (retain, nonatomic) NSString *merchantNote;
@property (retain, nonatomic) EcsWxaVipInfo *wxaVipInfo;
@property (nonatomic) unsigned int qualityInspectType;
@property (retain, nonatomic) EcsOrderBulkBuyInfo *orderBulkbuyInfo;

+ (void)initialize;

@end
