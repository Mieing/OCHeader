@class IESLLCouponModel;

@interface IESLLPOIActivityModel : IESLLifeBaseApiModel

@property (nonatomic) unsigned long long couponType;
@property (retain, nonatomic) IESLLCouponModel *couponModel;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)couponJSONTransformer;

- (void).cxx_destruct;

@end
