@class NSString, NSArray, EAIConfigMapValueRuleContent, EAIConfigOneHotValueRuleContent, EAIConfigConstValueRuleContent;

@interface EAIConfigEventRule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *inputName;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSString *paramName;
@property (retain, nonatomic) EAIConfigConstValueRuleContent *constRule;
@property (retain, nonatomic) EAIConfigMapValueRuleContent *mappingRule;
@property (retain, nonatomic) EAIConfigOneHotValueRuleContent *oneHotRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filtersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
