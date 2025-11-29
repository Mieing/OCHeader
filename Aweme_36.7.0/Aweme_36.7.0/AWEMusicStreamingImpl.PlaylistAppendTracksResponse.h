@class NSArray, AWEMiniLunaPlaylistInfoModel;

@interface AWEMusicStreamingImpl.PlaylistAppendTracksResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ mediaArr;
}

@property (nonatomic, retain) AWEMiniLunaPlaylistInfoModel *playlistInfo;
@property (nonatomic, copy) NSArray *mediaArr;

+ (id)playlistInfoJSONTransformer;
+ (id)mediaArrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
