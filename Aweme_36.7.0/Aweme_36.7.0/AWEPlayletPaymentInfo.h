@class NSNumber, AWEPlayletPaymentLimitFreeInfo;

@interface AWEPlayletPaymentInfo : AWEBaseApiModel

@property (nonatomic) long long playletPaidStatus;
@property (retain, nonatomic) NSNumber *playletItemPrice;
@property (retain, nonatomic) AWEPlayletPaymentLimitFreeInfo *limitFreeInfo;

+ (id)limitFreeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
