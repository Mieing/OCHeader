@class NSString, NSArray;

@interface AWEUserPostsWeakRefreshResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) BOOL needForceRefresh;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSArray *weakPosts;
@property (retain, nonatomic) NSArray *collectionWeakPosts;
@property (retain, nonatomic) NSArray *unreadNoticeModelList;

+ (id)awemeListJSONTransformer;
+ (id)weakPostsJSONTransformer;
+ (id)collectionWeakPostsJSONTransformer;
+ (id)unreadNoticeModelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
