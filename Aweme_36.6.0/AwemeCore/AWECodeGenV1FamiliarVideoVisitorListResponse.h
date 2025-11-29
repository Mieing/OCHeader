@class NSArray, NSString;

@interface AWECodeGenV1FamiliarVideoVisitorListResponse : AWEBaseResponseModel

@property (copy, nonatomic) NSArray *visitorListModelArray;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long hasMore;
@property (nonatomic) long long expireTime;
@property (copy, nonatomic) NSArray *likeListModelArray;
@property (nonatomic) long long playCount;
@property (nonatomic) long long playUvCount;
@property (nonatomic) int ttlDays;
@property (copy, nonatomic) NSArray *validCachedVisitorsModelArray;
@property (nonatomic) int coldStartPlayCount;
@property (nonatomic) long long favoriteTime;
@property (copy, nonatomic) NSString *favoriteUid;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
