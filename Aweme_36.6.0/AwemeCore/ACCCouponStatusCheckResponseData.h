@class NSString;

@interface ACCCouponStatusCheckResponseData : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long couponStatus;
@property (copy, nonatomic) NSString *alertTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
