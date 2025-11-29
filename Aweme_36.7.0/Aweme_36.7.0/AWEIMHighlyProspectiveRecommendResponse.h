@class NSArray;

@interface AWEIMHighlyProspectiveRecommendResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *userList;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;

+ (id)userListJSONTransformer;
+ (id)baseRespJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
