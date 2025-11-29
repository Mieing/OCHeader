@class NSArray, AWEFollowUserModel;

@interface AWEUserRecommendConcernResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *recommendUserList;
@property (retain, nonatomic) AWEFollowUserModel *followAuthor;
@property (nonatomic) BOOL hasMore;

+ (id)recommendUserListJSONTransformer;
+ (id)followAuthorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
