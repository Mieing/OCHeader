@class NSString;

@interface BDXBridgeCanIUseMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *method;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
