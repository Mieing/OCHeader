@class NSString, BDXBridgeSearchDoAiSearchActionAgentAction;

@interface BDXBridgeSearchDoAiSearchActionAgent : BDXBridgeModel

@property (copy, nonatomic) NSString *agentMethod;
@property (retain, nonatomic) BDXBridgeSearchDoAiSearchActionAgentAction *agentAction;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
