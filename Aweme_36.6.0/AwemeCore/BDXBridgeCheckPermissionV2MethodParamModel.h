@interface BDXBridgeCheckPermissionV2MethodParamModel : BDXBridgeModel

@property (nonatomic) unsigned long long permission;
@property (nonatomic) unsigned long long accessLevel;

+ (id)requiredKeyPaths;
+ (id)permissionJSONTransformer;
+ (id)accessLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
