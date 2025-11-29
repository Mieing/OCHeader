@class NSArray;

@interface AWEInspirationFeedResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
