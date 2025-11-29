@class BDXBridgeKefuStartGuideActionConfig, BDXBridgeKefuStartGuideGuideConfig, BDXBridgeKefuStartGuideProtectConfig;

@interface BDXBridgeKefuStartGuideMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeKefuStartGuideGuideConfig *guideConfig;
@property (retain, nonatomic) BDXBridgeKefuStartGuideActionConfig *actionConfig;
@property (retain, nonatomic) BDXBridgeKefuStartGuideProtectConfig *protectConfig;

+ (id)requiredKeyPaths;
+ (id)actionConfigJSONTransformer;
+ (id)protectConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)guideConfigJSONTransformer;

- (void).cxx_destruct;

@end
