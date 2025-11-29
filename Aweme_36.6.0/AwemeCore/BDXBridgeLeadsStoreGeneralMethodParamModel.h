@class NSString, NSDictionary;

@interface BDXBridgeLeadsStoreGeneralMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *actionName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
