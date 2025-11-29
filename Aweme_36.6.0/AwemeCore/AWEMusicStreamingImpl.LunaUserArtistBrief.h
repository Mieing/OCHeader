@class _TtC21AWEMusicStreamingImpl15LunaArtistBrief, _TtC21AWEMusicStreamingImpl13LunaUserBrief;

@interface AWEMusicStreamingImpl.LunaUserArtistBrief : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic) long long userArtistType;
@property (nonatomic, readonly) long long _userArtistType;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaUserBrief *user;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaArtistBrief *artist;
@property (nonatomic) BOOL fallback;

+ (id)userJSONTransformer;
+ (id)artistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
