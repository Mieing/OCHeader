@class AWEIMFansGroupCouponModel;

@interface AWEIMJoinGroupGetGiftsCouponModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMFansGroupCouponModel *couponModel;
@property (nonatomic) long long status;

+ (id)couponModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
