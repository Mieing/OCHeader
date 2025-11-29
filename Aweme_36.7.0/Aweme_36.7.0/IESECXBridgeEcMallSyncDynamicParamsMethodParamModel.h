@class NSDictionary;

@interface IESECXBridgeEcMallSyncDynamicParamsMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long paramsType;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
