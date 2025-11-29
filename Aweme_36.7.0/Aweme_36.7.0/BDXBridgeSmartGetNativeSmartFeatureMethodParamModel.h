@class NSString, NSArray, NSDictionary;

@interface BDXBridgeSmartGetNativeSmartFeatureMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSArray *featureList;
@property (copy, nonatomic) NSDictionary *params;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
