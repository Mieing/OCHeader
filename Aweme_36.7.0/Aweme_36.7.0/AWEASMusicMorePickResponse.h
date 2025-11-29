@class NSArray, NSString;

@interface AWEASMusicMorePickResponse : ACCBaseApiModel

@property (copy, nonatomic) NSArray *banners;
@property (retain, nonatomic) NSArray *playlist;
@property (copy, nonatomic) NSArray *musicCollection;
@property (retain, nonatomic) NSString *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL playlistHasMore;

+ (id)playlistJSONTransformer;
+ (id)bannersJSONTransformer;
+ (id)musicCollectionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
