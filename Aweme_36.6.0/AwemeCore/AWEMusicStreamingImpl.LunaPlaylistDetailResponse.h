@class NSString, AWEMiniLunaPlaylistInfoModel, NSArray;

@interface AWEMusicStreamingImpl.LunaPlaylistDetailResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ nextCursor;
    void /* function */ mediaResources;
}

@property (nonatomic) BOOL hasMore;
@property (nonatomic, copy) NSString *nextCursor;
@property (nonatomic, retain) AWEMiniLunaPlaylistInfoModel *playlist;
@property (nonatomic, copy) NSArray *mediaResources;

+ (id)playlistJSONTransformer;
+ (id)mediaResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
