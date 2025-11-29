@class NSString, AWESearchAIGCInputAgentActionModel;

@interface AWESearchAIGCInputAgentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *agentName;
@property (copy, nonatomic) NSString *agentIcon;
@property (copy, nonatomic) NSString *agentIconBlack;
@property (copy, nonatomic) NSString *agentMethod;
@property (retain, nonatomic) AWESearchAIGCInputAgentActionModel *actionModel;
@property (nonatomic) BOOL hasShown;

+ (id)actionModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
