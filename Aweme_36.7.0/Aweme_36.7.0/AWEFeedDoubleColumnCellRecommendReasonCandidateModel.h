@class AWEFeedDoubleColumnCellRecommendReasonStaticLabel;

@interface AWEFeedDoubleColumnCellRecommendReasonCandidateModel : AWEBaseApiModel

@property (retain, nonatomic) AWEFeedDoubleColumnCellRecommendReasonStaticLabel *staticLabel;
@property (nonatomic) long long businessID;
@property (nonatomic) long long priority;

+ (id)staticLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
