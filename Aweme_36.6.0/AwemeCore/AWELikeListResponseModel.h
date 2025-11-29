@class NSArray, NSString;

@interface AWELikeListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *userList;
@property (nonatomic) long long maxCursor;
@property (nonatomic) long long minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long filteredCount;
@property (copy, nonatomic) NSString *hotsoonText;
@property (nonatomic) long long hotsoonFilterCount;
@property (nonatomic) long long hotsoonHasMore;
@property (nonatomic) long long bottomPrivacyTextType;
@property (copy, nonatomic) NSString *bottomPrivacyText;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long insertDiggCanceled;

+ (id)userListJSONTransformer;
+ (id)bottomPrivacyTextTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
