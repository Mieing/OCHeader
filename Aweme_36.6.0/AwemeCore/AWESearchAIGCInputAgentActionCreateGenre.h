@class NSString, NSArray;

@interface AWESearchAIGCInputAgentActionCreateGenre : AWEBaseApiModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *inputPlaceholder;
@property (copy, nonatomic) NSString *queryTemplate;
@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSArray *requirementList;
@property (nonatomic) BOOL isSelected;

+ (id)requirementListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
