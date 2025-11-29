@class NSString, NSNumber;

@interface LifeXBridgeLifeStorageSubscribeDomainMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSNumber *onlyDiff;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
