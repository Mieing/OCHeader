@class NSString, NSNumber;

@interface LifeXBridgeLifeStorageSubscribeMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSNumber *onlyDiff;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
