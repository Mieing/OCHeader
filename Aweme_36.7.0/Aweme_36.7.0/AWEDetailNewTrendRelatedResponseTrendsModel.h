@class AWETrendInfoModel, NSArray;

@interface AWEDetailNewTrendRelatedResponseTrendsModel : AWEBaseApiModel

@property (nonatomic) long long trendsID;
@property (retain, nonatomic) AWETrendInfoModel *trendsInfo;
@property (copy, nonatomic) NSArray *trendsAwemeList;
@property (copy, nonatomic) NSArray *authorModelList;

+ (id)trendsInfoJSONTransformer;
+ (id)trendsAwemeListJSONTransformer;
+ (id)authorModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
