@class NSArray, NSString;

@interface IESLLLivePickUpCouponModel : IESLLifeBaseApiModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *trackParams;
@property (copy, nonatomic) NSString *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
