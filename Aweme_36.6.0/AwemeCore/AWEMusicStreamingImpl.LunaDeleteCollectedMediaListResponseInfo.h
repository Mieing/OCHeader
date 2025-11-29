@class NSArray, AWEMiniLunaPlaylistInfoModel, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaDeleteCollectedMediaListResponseInfo : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ deletedMedia;
}

@property (nonatomic, retain) AWEMiniLunaPlaylistInfoModel *playlistInfo;
@property (nonatomic, copy) NSArray *deletedMedia;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *coverURL;

+ (id)playlistInfoJSONTransformer;
+ (id)deletedMediaJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
