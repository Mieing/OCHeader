@class _TtC21AWEMusicStreamingImpl14LunaVolumeInfo, NSString, NSArray, _TtC21AWEMusicStreamingImpl18LunaVideoLabelInfo, _TtC21AWEMusicStreamingImpl14LunaMediaStats, _TtC21AWEMusicStreamingImpl13LunaAlbumLink, _TtC21AWEMusicStreamingImpl16LunaMyMediaState, _TtC21AWEMusicStreamingImpl11LunaURLInfo, _TtC21AWEMusicStreamingImpl9LunaMedia;

@interface AWEMusicStreamingImpl.LunaVideo : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ vid;
    void /* function */ type;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stats;
    void /* function */ title;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tags;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* function */ artists;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *vid;
@property (nonatomic) long long duration;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *imageUrl;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *coverUrl;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaMediaStats *stats;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaAlbumLink *album;
@property (nonatomic, copy) NSArray *tags;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaMyMediaState *state;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *backgroundUrl;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaVolumeInfo *volumeInfo;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic) long long status;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaVideoLabelInfo *labelInfo;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaMedia *originalMedia;

+ (id)stateJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)imageUrlJSONTransformer;
+ (id)labelInfoJSONTransformer;
+ (id)albumJSONTransformer;
+ (id)artistsJSONTransformer;
+ (id)coverUrlJSONTransformer;
+ (id)tagsJSONTransformer;
+ (id)backgroundUrlJSONTransformer;
+ (id)volumeInfoJSONTransformer;
+ (id)originalMediaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
