@class NSString, AWESearchAIGCInputAgentActionCreateInfo;

@interface AWESearchAIGCInputAgentActionModel : AWEBaseApiModel

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *sendQuery;
@property (retain, nonatomic) AWESearchAIGCInputAgentActionCreateInfo *createInfo;

+ (id)createInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
