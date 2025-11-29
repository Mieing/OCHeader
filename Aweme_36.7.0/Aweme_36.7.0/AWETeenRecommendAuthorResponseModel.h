@class NSArray;

@interface AWETeenRecommendAuthorResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *authorList;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
