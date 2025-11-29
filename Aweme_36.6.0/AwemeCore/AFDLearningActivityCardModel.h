@class NSString, AFDLearningRecommendReasonModel, AWEURLModel;

@interface AFDLearningActivityCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *activityID;
@property (nonatomic) long long iconType;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *popularityText;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) AFDLearningRecommendReasonModel *reasonModel;

+ (id)iconURLJSONTransformer;
+ (id)reasonModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
