@class NSArray, AWEMiniLunaPlaylistInfoModel, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaCollectMediaListResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ collectedMedia;
}

@property (nonatomic, retain) AWEMiniLunaPlaylistInfoModel *playlistInfo;
@property (nonatomic, copy) NSArray *collectedMedia;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *coverURL;

+ (id)collectedMediaJSONTransformer;
+ (id)playlistInfoJSONTransformer;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isBizSuccess;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
