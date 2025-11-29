@class NSString, NSNumber;

@interface BDXBridgeLocalLifePoiWarmUpMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *bizCode;
@property (retain, nonatomic) NSNumber *level;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
