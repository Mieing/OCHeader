@class AWESearchTabGuideExitRuleModel, NSArray;

@interface AWESearchTabGuideResponse : AWEBaseApiModel

@property (nonatomic) double initTimestamp;
@property (nonatomic) long long bubbleStyleType;
@property (retain, nonatomic) AWESearchTabGuideExitRuleModel *globalExitRule;
@property (copy, nonatomic) NSArray *guideList;

+ (id)globalExitRuleJSONTransformer;
+ (id)guideListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
