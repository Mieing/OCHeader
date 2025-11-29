@class AWEPOIInStoreCouponPageModel;

@interface AWEPOIProfileCouponCommitResponseModel : AWEPOIProfileCouponResponseModel

@property (copy, nonatomic) AWEPOIInStoreCouponPageModel *couponPage;
@property (nonatomic) long long followStatus;

+ (id)followStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
