@class NSString;

@interface BDXBridgeGetUserDomainStorageItemMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL enableAppIdIsolation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
