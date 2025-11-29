@interface AWESearchMerchandiseProductEcomTagInfo : AWEBaseApiModel

@property (nonatomic) BOOL isGroupBuy;
@property (nonatomic) long long applyCoupon;
@property (nonatomic) BOOL isMultiSKU;

+ (id)applyCouponJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
