@class _TtC21AWEMusicStreamingImpl11LunaURLInfo, NSString, _TtC21AWEMusicStreamingImpl13LunaUserBrief, _TtC21AWEMusicStreamingImpl17LunaMyArtistState;

@interface AWEMusicStreamingImpl.LunaArtistLink : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ name;
    void /* function */ simpleDisplayName;
    void /* function */ fullDisplayName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *simpleDisplayName;
@property (nonatomic, copy) NSString *fullDisplayName;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl11LunaURLInfo *avatar;
@property (nonatomic) long long tracksCount;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl17LunaMyArtistState *state;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaUserBrief *userInfo;
@property (nonatomic) long long userArtistType;
@property (nonatomic, readonly) NSString *artistOrUserId;

+ (id)avatarJSONTransformer;
+ (id)stateJSONTransformer;
+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
