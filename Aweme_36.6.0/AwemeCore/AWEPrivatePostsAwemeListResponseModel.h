@class NSArray, NSNumber;

@interface AWEPrivatePostsAwemeListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *total;
@property (nonatomic) BOOL shouldAggregateSharedPosts;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
