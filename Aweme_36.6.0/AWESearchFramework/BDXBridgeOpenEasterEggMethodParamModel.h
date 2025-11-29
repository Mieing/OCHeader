@class NSString, NSDictionary;

@interface BDXBridgeOpenEasterEggMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSDictionary *searchEasterEggConfig;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
