@class NSArray;

@interface AWEFavoriteEffectsListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *stickerList;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (nonatomic) BOOL hasMore;

+ (id)stickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
