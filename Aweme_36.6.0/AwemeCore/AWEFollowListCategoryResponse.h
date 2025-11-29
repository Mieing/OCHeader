@class AWEFollowListCategoryStatisticsModel;

@interface AWEFollowListCategoryResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEFollowListCategoryStatisticsModel *categoryCount;

+ (id)categoryCountJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
