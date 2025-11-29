@class NSDictionary;

@interface BTMXBridgeSetBcmPageParamsV2MethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL clear_old_value;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
