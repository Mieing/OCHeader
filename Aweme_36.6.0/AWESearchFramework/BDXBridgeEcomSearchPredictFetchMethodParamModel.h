@class NSString, NSDictionary;

@interface BDXBridgeEcomSearchPredictFetchMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
