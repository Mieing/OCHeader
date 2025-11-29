@class AWEPOIInStoreCouponPageModel;

@interface AWEPOIProfileCouponGetResponseModel : AWEPOIProfileCouponResponseModel

@property (copy, nonatomic) AWEPOIInStoreCouponPageModel *couponPage;
@property (nonatomic) BOOL directGet;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
