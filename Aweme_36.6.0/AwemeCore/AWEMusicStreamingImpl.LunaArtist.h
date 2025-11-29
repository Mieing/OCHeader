@class _TtC21AWEMusicStreamingImpl17LunaMyArtistState, NSString, _TtC21AWEMusicStreamingImpl11LunaURLInfo, _TtC21AWEMusicStreamingImpl13LunaUserBrief, _TtC21AWEMusicStreamingImpl17LunaArtistProfile, _TtC21AWEMusicStreamingImpl15LunaArtistStats;

@interface AWEMusicStreamingImpl.LunaArtist : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ name;
    void /* function */ simpleDisplayName;
    void /* function */ fullDisplayName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stats;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* unknown type, empty encoding */ $__lazy_storage_$_profile;
    void /* function */ searchExplainInfo;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *simpleDisplayName;
@property (nonatomic, copy) NSString *fullDisplayName;
@property (nonatomic) long long albumsCount;
@property (nonatomic) long long tracksCount;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaArtistStats *stats;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl17LunaMyArtistState *state;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *avatar;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl17LunaArtistProfile *profile;
@property (nonatomic) BOOL fromFeed;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaUserBrief *user;
@property (nonatomic, copy) NSString *searchExplainInfo;
@property (nonatomic) long long userArtistType;

+ (id)avatarJSONTransformer;
+ (id)stateJSONTransformer;
+ (id)statsJSONTransformer;
+ (id)profileJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
