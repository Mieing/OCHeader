@class NSArray;

@interface AWEAnchorMediumRecommendResponseModel : AWEBaseApiModel

@property (nonatomic) long long cursor;
@property (copy, nonatomic) NSArray *mediumModels;
@property (nonatomic) BOOL hasMore;

+ (id)hasMoreJSONTransformer;
+ (id)mediumModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
