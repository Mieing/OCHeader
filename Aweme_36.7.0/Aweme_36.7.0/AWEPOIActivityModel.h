@class AWECouponModel;

@interface AWEPOIActivityModel : AWEBaseApiModel

@property (nonatomic) unsigned long long couponType;
@property (retain, nonatomic) AWECouponModel *couponModel;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;

- (void).cxx_destruct;

@end
