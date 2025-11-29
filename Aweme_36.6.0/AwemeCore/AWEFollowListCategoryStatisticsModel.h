@class NSNumber;

@interface AWEFollowListCategoryStatisticsModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *postCount;
@property (retain, nonatomic) NSNumber *liveCount;
@property (retain, nonatomic) NSNumber *shopCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
