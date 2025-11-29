@class NSArray;

@interface AWESearchAIGCInputAgentResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *agentList;

+ (id)agentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
