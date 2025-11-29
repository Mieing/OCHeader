@class NSString, NSArray;

@interface BDXBridgeAdGetAdFeatureMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *creativeID;
@property (retain, nonatomic) NSArray *features;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
