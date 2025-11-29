@class NSString, NSArray, NSNumber;

@interface ACCMusicPickResponse : ACCBaseApiModel

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) NSArray *musicList;
@property (retain, nonatomic) NSArray *playlist;
@property (retain, nonatomic) NSArray *chartList;
@property (retain, nonatomic) NSArray *extraMusicList;
@property (nonatomic) long long musicListType;
@property (retain, nonatomic) NSNumber *FMCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL playlistHasMore;

+ (id)playlistJSONTransformer;
+ (id)categoriesJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)chartListJSONTransformer;
+ (id)bannersJSONTransformer;
+ (id)playlistHasMoreJSONTransformer;
+ (id)extraMusicListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
