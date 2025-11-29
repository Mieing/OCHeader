@class _TtC21AWEMusicStreamingImpl14LunaColourInfo, NSString, NSArray, _TtC21AWEMusicStreamingImpl16LunaMyAlbumState, _TtC21AWEMusicStreamingImpl14LunaAlbumStats, _TtC21AWEMusicStreamingImpl11LunaURLInfo;

@interface AWEMusicStreamingImpl.LunaAlbum : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ name;
    void /* unknown type, empty encoding */ $__lazy_storage_$_artists;
    void /* function */ company;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stats;
    void /* function */ PCLines;
    void /* function */ coverGradientColors;
    void /* function */ backgroundColor;
    void /* function */ intro;
    void /* function */ relationMedia;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic, copy) NSString *company;
@property (nonatomic) long long tracksCount;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaMyAlbumState *state;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaAlbumStats *stats;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *cover;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *playerBg;
@property (nonatomic) long long releaseDate;
@property (nonatomic) BOOL isFromFeed;
@property (nonatomic, copy) NSArray *PCLines;
@property (nonatomic, copy) NSArray *coverGradientColors;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *coverShadowColor;
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaColourInfo *featuredCommentTagColor;
@property (nonatomic, copy) NSString *intro;
@property (nonatomic) BOOL isExplicit;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSString *relationMedia;

+ (id)coverJSONTransformer;
+ (id)playerBgJSONTransformer;
+ (id)coverGradientColorsJSONTransformer;
+ (id)coverShadowColorJSONTransformer;
+ (id)featuredCommentTagColorJSONTransformer;
+ (id)stateJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)artistsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
