@interface BDXBridgeVideoStatusChangeMethodParamModel : BDXBridgeModel

@property (nonatomic) unsigned long long type;

+ (id)requiredKeyPaths;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
