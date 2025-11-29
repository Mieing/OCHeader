@class NSArray;

@interface AWEFavoriteRecommendListResponseModel : AWEBaseApiModel

@property (readonly, nonatomic) NSArray *recommendList;

+ (id)recommendListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
