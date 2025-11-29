@class NSString;

@interface IESECCouponButtonExtraModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *passThroughType;
@property (retain, nonatomic) NSString *stickinessType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
