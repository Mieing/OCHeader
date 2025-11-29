@class NSString, NSDictionary;

@interface IESECXBridgeMallDeliveryNativeAbilityModifyMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *ability;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSDictionary *extraParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
