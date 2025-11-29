@class NSDictionary, NSArray;

@interface IESECShopApplyCouponResponse : IESECBaseApiModel

@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSArray *couponRespItems;

+ (id)couponRespItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
