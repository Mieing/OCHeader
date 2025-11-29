@class NSString, NSDictionary, BDXBridgeAdRequestRewardCouponReqParams, NSNumber, BDXBridgeAdRequestRewardCouponContextParams;

@interface BDXBridgeAdRequestRewardCouponMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *show_toast;
@property (copy, nonatomic) NSString *log_extra;
@property (retain, nonatomic) BDXBridgeAdRequestRewardCouponReqParams *req_params;
@property (retain, nonatomic) BDXBridgeAdRequestRewardCouponContextParams *context_params;
@property (copy, nonatomic) NSDictionary *event_params;

+ (id)requiredKeyPaths;
+ (id)req_paramsJSONTransformer;
+ (id)context_paramsJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
