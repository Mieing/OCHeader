@class NSString, _TtC21AWEMusicStreamingImpl19LunaUserArtistBrief, _TtC21AWEMusicStreamingImpl13LunaUserBrief;

@interface AWEMusicStreamingImpl.LunaTrackPlatformMining : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ reason;
}

@property (nonatomic, copy) NSString *reason;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl13LunaUserBrief *user;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl19LunaUserArtistBrief *userArtistInfo;

+ (id)userJSONTransformer;
+ (id)userArtistInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
