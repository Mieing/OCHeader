@class NSString, NSArray, AWESearchAIGCInputAgentActionCreateRequirementOpt;

@interface AWESearchAIGCInputAgentActionCreateRequirement : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *queryTemplate;
@property (copy, nonatomic) NSArray *optList;
@property (retain, nonatomic) AWESearchAIGCInputAgentActionCreateRequirementOpt *selectOption;

+ (id)optListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
