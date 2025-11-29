@interface AWESearchMerchandiseProductEcomTagInfo : AWEBaseApiModel

@property (nonatomic) BOOL isGroupBuy;
@property (nonatomic) long long applyCoupon;

+ (id)applyCouponJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
