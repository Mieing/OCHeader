@class NSNumber, NSDictionary;

@interface BDXBridgeFeFirstScreenMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *time;
@property (copy, nonatomic) NSDictionary *extraData;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
