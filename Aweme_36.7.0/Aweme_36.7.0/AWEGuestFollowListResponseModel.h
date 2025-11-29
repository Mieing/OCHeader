@class NSArray, NSString;

@interface AWEGuestFollowListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *authorList;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSString *nextPageToken;
@property (nonatomic) BOOL hasMore;

+ (id)authorListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
