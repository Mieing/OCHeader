@class _TtC21AWEMusicStreamingImpl15LunaTrackLyrics, _TtC21AWEMusicStreamingImpl9LunaTrack, _TtC21AWEMusicStreamingImpl14LunaPlayerInfo;

@interface AWEMusicStreamingImpl.LunaGetTrackV2Response : AWEMusicStreamingImpl.LunaBaseApiResponseModel

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaTrackLyrics *lyric;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaTrack *track;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaPlayerInfo *player;
@property (nonatomic) long long riskResult;
@property (nonatomic) long long expireAt;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isExpired;

@end
