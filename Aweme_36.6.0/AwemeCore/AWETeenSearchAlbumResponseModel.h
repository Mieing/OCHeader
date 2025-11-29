@class NSArray, NSNumber, NSString;

@interface AWETeenSearchAlbumResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *albumList;
@property (copy, nonatomic) NSArray *placeholderAlbumList;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *searchId;

+ (id)hasMoreJSONTransformer;
+ (id)albumListJSONTransformer;
+ (id)placeholderAlbumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
