@class NSString, AWEMiniLunaPlaylistInfoModel, NSArray;

@interface AWEMiniLunaPlaylistDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWEMiniLunaPlaylistInfoModel *playlist;
@property (retain, nonatomic) NSArray *mediaResources;

+ (id)mediaResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
