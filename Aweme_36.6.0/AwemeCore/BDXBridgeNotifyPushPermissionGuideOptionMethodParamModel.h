@class NSString, NSDictionary;

@interface BDXBridgeNotifyPushPermissionGuideOptionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *permissionScene;
@property (copy, nonatomic) NSString *optionName;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
