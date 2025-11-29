@class NSArray, NSString;

@interface AWETeenIntroPageAlbumItemListResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSArray *awemeList;
@property (nonatomic) long long minCursor;
@property (nonatomic) long long maxCursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *pageToken;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
