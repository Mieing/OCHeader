@class _TtC21AWEMusicStreamingImpl16LunaMyTrackState, NSString, NSArray, _TtC21AWEMusicStreamingImpl20LunaDigitalAssetInfo, _TtC21AWEMusicStreamingImpl13LunaAlbumLink, _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo, _TtC21AWEMusicStreamingImpl15LunaTrackChorus, _TtC21AWEMusicStreamingImpl14LunaTrackColor, _TtC21AWEMusicStreamingImpl21LunaSongMakerTeamInfo, _TtC21AWEMusicStreamingImpl14LunaMediaStats, _TtC21AWEMusicStreamingImpl15MiniLunaFeature, _TtC21AWEMusicStreamingImpl16LunaTrackPreview;

@interface AWEMusicStreamingImpl.LunaTrack : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* unknown type, empty encoding */ $__lazy_storage_$_artists;
    void /* function */ name;
    void /* function */ subName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_preview;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chorus;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* function */ vid;
    void /* unknown type, empty encoding */ $__lazy_storage_$_label;
    void /* unknown type, empty encoding */ $__lazy_storage_$_songTeamInfo;
    void /* function */ mediaType;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bitRates;
    void /* function */ recommendContentSource;
    void /* function */ relationMedia;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stats;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaAlbumLink *album;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic) long long duration;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *subName;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaTrackPreview *preview;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaTrackChorus *chorus;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaMyTrackState *state;
@property (nonatomic) long long publishedTime;
@property (nonatomic, copy) NSString *vid;
@property (nonatomic) BOOL isInstrumental;
@property (nonatomic) BOOL isFromFeed;
@property (nonatomic) long long status;
@property (nonatomic) long long shareStatus;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo *label;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl21LunaSongMakerTeamInfo *songTeamInfo;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic) long long simID;
@property (nonatomic, copy) NSArray *bitRates;
@property (nonatomic, copy) NSString *recommendContentSource;
@property (nonatomic, copy) NSString *relationMedia;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl20LunaDigitalAssetInfo *digitalTrackInfo;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaTrackColor *trackColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaMediaStats *stats;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15MiniLunaFeature *miniLunaFeature;

+ (id)stateJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)albumJSONTransformer;
+ (id)artistsJSONTransformer;
+ (id)previewJSONTransformer;
+ (id)chorusJSONTransformer;
+ (id)labelJSONTransformer;
+ (id)songTeamInfoJSONTransformer;
+ (id)bitRatesJSONTransformer;
+ (id)digitalTrackInfoJSONTransformer;
+ (id)trackColorJSONTransformer;
+ (id)miniLunaAnchorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
