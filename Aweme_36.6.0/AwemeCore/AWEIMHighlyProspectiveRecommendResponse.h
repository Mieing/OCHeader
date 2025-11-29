@class NSArray, AWEIMHighlyProspectiveBaseResponse;

@interface AWEIMHighlyProspectiveRecommendResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEIMHighlyProspectiveBaseResponse *baseResp;
@property (copy, nonatomic) NSArray *userList;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long totalCount;

+ (id)userListJSONTransformer;
+ (id)baseRespJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
