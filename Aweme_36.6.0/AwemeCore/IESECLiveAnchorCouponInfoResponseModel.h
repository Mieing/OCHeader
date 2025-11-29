@class IESECLiveCouponModel;

@interface IESECLiveAnchorCouponInfoResponseModel : IESECLiveApiBaseModel

@property (retain, nonatomic) IESECLiveCouponModel *coupon;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;

- (void).cxx_destruct;

@end
