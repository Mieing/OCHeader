@class NSArray;

@interface AWEUserRecommendConcernResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *recommendUserList;
@property (nonatomic) BOOL hasMore;

+ (id)recommendUserListJSONTransformer;
+ (id)followAuthorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
