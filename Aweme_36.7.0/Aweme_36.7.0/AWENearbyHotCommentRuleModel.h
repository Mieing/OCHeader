@class NSArray;

@interface AWENearbyHotCommentRuleModel : AWEBaseApiModel

@property (nonatomic) long long showDuration;
@property (nonatomic) long long replaceTag;
@property (retain, nonatomic) NSArray *rules;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
