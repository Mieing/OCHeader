@class NSString;

@interface BDXBridgeSwitchScanResultTabMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *transEventExtra;
@property (nonatomic) long long targetTab;

+ (id)requiredKeyPaths;
+ (id)targetTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
