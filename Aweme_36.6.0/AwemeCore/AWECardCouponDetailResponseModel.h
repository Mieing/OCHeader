@class AWECouponDetailModel;

@interface AWECardCouponDetailResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWECouponDetailModel *coupon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
