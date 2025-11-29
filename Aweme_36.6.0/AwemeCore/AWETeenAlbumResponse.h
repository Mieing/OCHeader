@class NSArray, NSNumber, NSString;

@interface AWETeenAlbumResponse : AWEBaseApiModel

@property (copy, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSNumber *minCursor;
@property (retain, nonatomic) NSNumber *maxCursor;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *pageToken;
@property (nonatomic) BOOL hasPrevious;

+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
