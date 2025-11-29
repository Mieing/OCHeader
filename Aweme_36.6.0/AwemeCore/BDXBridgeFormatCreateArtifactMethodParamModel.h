@class NSString;

@interface BDXBridgeFormatCreateArtifactMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *genParamsJsonStr;
@property (copy, nonatomic) NSString *extraJsonStr;
@property (copy, nonatomic) NSString *editParamsJsonStr;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
