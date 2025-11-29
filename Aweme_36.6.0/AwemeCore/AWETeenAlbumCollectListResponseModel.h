@class NSArray, NSString;

@interface AWETeenAlbumCollectListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *albums;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *pageToken;

+ (id)albumsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
