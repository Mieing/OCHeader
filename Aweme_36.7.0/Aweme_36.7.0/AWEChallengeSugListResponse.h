@class NSArray, AWERecommendWordQueryRecordModel;

@interface AWEChallengeSugListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *challengSugList;
@property (retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord;

+ (id)wordsQueryRecordJSONTransformer;
+ (id)challengSugListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
