@class NSString, NSMutableArray;

@interface EcsWxaVipDiscountReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isUseWxaVipDiscount;
@property (nonatomic) unsigned long long vipDiscountedPrice;
@property (retain, nonatomic) NSMutableArray *productInfos;

+ (void)initialize;

@end
