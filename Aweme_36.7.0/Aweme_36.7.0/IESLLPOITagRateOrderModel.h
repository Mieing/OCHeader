@class NSString;

@interface IESLLPOITagRateOrderModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *spuName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
