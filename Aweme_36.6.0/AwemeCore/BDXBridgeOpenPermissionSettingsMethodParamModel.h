@class NSNumber;

@interface BDXBridgeOpenPermissionSettingsMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *useVersion2;
@property (nonatomic) long long permission;
@property (nonatomic) long long accessLevel;

+ (id)requiredKeyPaths;
+ (id)permissionJSONTransformer;
+ (id)accessLevelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
