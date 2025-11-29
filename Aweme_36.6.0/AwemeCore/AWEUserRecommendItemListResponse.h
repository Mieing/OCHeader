@class NSArray;

@interface AWEUserRecommendItemListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userExtraList;

+ (id)userExtraListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
