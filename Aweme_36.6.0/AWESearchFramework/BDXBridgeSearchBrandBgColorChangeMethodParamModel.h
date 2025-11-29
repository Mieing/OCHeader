@class NSString, NSDictionary;

@interface BDXBridgeSearchBrandBgColorChangeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSDictionary *searchBgConfig;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
