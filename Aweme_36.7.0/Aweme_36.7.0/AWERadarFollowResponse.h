@class AWERadarCouponModel;

@interface AWERadarFollowResponse : AWEBaseApiModel

@property (nonatomic) long long followStatus;
@property (nonatomic) long long couponStatus;
@property (retain, nonatomic) AWERadarCouponModel *coupon;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;

- (void).cxx_destruct;

@end
