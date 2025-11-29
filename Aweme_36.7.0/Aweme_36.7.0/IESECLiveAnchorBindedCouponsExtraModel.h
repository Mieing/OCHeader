@class NSString;

@interface IESECLiveAnchorBindedCouponsExtraModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *explainGuide;
@property (copy, nonatomic) NSString *bindGuide;
@property (copy, nonatomic) NSString *inputGuide;
@property (copy, nonatomic) NSString *endCouponNotice;
@property (copy, nonatomic) NSString *endCouponToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
