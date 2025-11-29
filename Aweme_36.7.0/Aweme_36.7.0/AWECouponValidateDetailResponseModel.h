@class AWECouponValidateDetail;

@interface AWECouponValidateDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWECouponValidateDetail *coupon;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;

- (void).cxx_destruct;

@end
