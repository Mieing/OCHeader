@class NSString;

@interface EcsWxaVipDiscountResp : WXPBGeneratedMessage

@property (nonatomic) unsigned long long vipDiscountedPrice;
@property (nonatomic) BOOL unuseShopDiscount;
@property (retain, nonatomic) NSString *vipDiscountBufferForWxa;
@property (nonatomic) int discountedPriceErr;

+ (void)initialize;

@end
