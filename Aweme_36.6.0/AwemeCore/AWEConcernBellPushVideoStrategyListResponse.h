@class NSArray;

@interface AWEConcernBellPushVideoStrategyListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)hasMoreJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
