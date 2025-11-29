@interface BDXBridgeRequestPermissionMethodParamModel : BDXBridgeModel

@property (nonatomic) unsigned long long permission;
@property (nonatomic) BOOL showAlert;
@property (nonatomic) unsigned long long accessLevel;

+ (id)requiredKeyPaths;
+ (id)permissionJSONTransformer;
+ (id)accessLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
