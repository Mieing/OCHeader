@class NSString;

@interface BDXBridgeSetPrivacySettingMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
