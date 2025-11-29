@class NSNumber, NSString, BDXBridgeSearchDoAiSearchActionCreateInfo;

@interface BDXBridgeSearchDoAiSearchActionAgentAction : BDXBridgeModel

@property (retain, nonatomic) NSNumber *actionType;
@property (copy, nonatomic) NSString *sendQuery;
@property (retain, nonatomic) BDXBridgeSearchDoAiSearchActionCreateInfo *createInfo;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
