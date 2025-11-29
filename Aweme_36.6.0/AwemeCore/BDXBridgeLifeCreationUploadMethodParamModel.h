@class NSArray;

@interface BDXBridgeLifeCreationUploadMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *instances;

+ (id)requiredKeyPaths;
+ (id)instancesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
