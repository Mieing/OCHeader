@class NSString;

@interface LifeXBridgeLifeStorageSetMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) id value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
