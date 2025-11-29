@class NSNumber, NSString;

@interface IESECXBridgeEcAnniePrerenderMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *expiredTime;
@property (copy, nonatomic) NSString *strategy;
@property (copy, nonatomic) NSString *schema;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
