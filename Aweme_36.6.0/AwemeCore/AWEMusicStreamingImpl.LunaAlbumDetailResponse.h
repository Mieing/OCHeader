@class NSArray, _TtC21AWEMusicStreamingImpl9LunaAlbum;

@interface AWEMusicStreamingImpl.LunaAlbumDetailResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ tracks;
}

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaAlbum *albumInfo;
@property (nonatomic, copy) NSArray *tracks;

+ (id)albumInfoJSONTransformer;
+ (id)tracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isBizSuccess;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
