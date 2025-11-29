@class NSArray;

@interface AWEFavoriteListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long insertCollectCanceled;

+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
