@class _TtC21AWEMusicStreamingImpl9LunaTrack, _TtC21AWEMusicStreamingImpl14LunaPlayerInfo;

@interface AWEMusicStreamingImpl.LunaTrackListItem : AWEMusicStreamingImpl.LunaBaseApiModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaTrack *track;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaPlayerInfo *player;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
