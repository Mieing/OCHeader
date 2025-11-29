@class AWEPaymentLimitFreeConfigModel, NSArray, AWEPaymentLimitFreeHintModel, AWEPaymentApplyCouponModel;

@interface AWEPaymentMarketingInfoModel : AWEBaseApiModel

@property (retain, nonatomic) AWEPaymentLimitFreeConfigModel *limitFreeConfigModel;
@property (retain, nonatomic) AWEPaymentLimitFreeHintModel *limitFreeHintModel;
@property (retain, nonatomic) AWEPaymentApplyCouponModel *applyCouponModel;
@property (copy, nonatomic) NSArray *marketingTags;

+ (id)limitFreeConfigModelJSONTransformer;
+ (id)limitFreeHintModelJSONTransformer;
+ (id)applyCouponModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
