@class BDXBridgeSearchDoAiSearchActionAgent;

@interface BDXBridgeSearchDoAiSearchActionMethodParamModel : BDXBridgeModel

@property (retain, nonatomic) BDXBridgeSearchDoAiSearchActionAgent *agent;

+ (id)requiredKeyPaths;
+ (id)agentJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
