@class NSArray;

@interface AWEAwemeStatisticsResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *statisticsList;

+ (id)statisticsListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
