@class NSString, NSDictionary;

@interface BDXBridgeEcMallSkinInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *configHashVal;
@property (copy, nonatomic) NSDictionary *config;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
