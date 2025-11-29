@class NSNumber, NSString, NSDictionary;

@interface BTMXBridgeGetBcmChainV2MethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *chain_length;
@property (retain, nonatomic) NSNumber *is_domain_standard;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *bcm;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
