@class NSString, AWEAwemeModel;

@interface AWEFavoriteRecommendModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) long long itemCount;
@property (retain, nonatomic) AWEAwemeModel *latestItem;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
