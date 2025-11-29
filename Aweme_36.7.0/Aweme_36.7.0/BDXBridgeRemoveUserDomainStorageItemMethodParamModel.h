@class NSString;

@interface BDXBridgeRemoveUserDomainStorageItemMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL enableAppIdIsolation;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
