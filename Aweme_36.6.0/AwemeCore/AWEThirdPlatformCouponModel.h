@class NSString;

@interface AWEThirdPlatformCouponModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *couponPrice;
@property (copy, nonatomic) NSString *couponText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
