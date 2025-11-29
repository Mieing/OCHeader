@class NSArray;

@interface AWEIMRecommendUserListInfoModel : IESIMBaseApiModel

@property (copy, nonatomic) NSArray *fansInfoList;
@property (nonatomic) long long remainingInvitableCount;
@property (nonatomic) long long inviteGroupID;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long nextCursor;

+ (id)fansInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
