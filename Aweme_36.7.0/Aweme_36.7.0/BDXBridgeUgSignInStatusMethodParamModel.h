@class NSString, NSDictionary;

@interface BDXBridgeUgSignInStatusMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL isSet;
@property (copy, nonatomic) NSDictionary *data;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
