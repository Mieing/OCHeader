@class NSArray, AWERecommendWordQueryRecordModel, NSDictionary, AWESugCacheConfModel;

@interface AWESearchSugResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *sugList;
@property (copy, nonatomic) NSArray *virtualSugList;
@property (retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord;
@property (copy, nonatomic) NSArray *wordsLists;
@property (copy, nonatomic) NSDictionary *streamTimeCost;
@property (retain, nonatomic) AWESugCacheConfModel *sugCacheConf;

+ (id)wordsQueryRecordJSONTransformer;
+ (id)sugListJSONTransformer;
+ (id)virtualSugListJSONTransformer;
+ (id)wordsListsJSONTransformer;
+ (id)sugCacheConfJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
