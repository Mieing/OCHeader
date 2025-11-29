@class NSArray, NSString;

@interface AWERecycledWorksFetchResultResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
