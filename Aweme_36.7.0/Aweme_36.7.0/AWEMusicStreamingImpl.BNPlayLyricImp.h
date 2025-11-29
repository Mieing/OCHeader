@class NSString, _TtC21AWEMusicStreamingImpl14LunaTrackColor, _TtC21AWEMusicStreamingImpl15LunaTrackLyrics, _TtC21AWEMusicStreamingImpl21LunaSongMakerTeamInfo;

@interface AWEMusicStreamingImpl.BNPlayLyricImp : MTLModel {
    void /* function */ trackID;
    void /* function */ requestID;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ translationMetrics;
    void /* unknown type, empty encoding */ lyricHash;
    void /* unknown type, empty encoding */ shouldClear;
    void /* unknown type, empty encoding */ transStartIndex;
    void /* unknown type, empty encoding */ lastIndex;
    void /* unknown type, empty encoding */ lines;
    void /* unknown type, empty encoding */ translationLines;
    void /* unknown type, empty encoding */ translationLineMap;
    void /* unknown type, empty encoding */ lyricParser;
    void /* unknown type, empty encoding */ fromCache;
}

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaTrackLyrics *lyric;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14LunaTrackColor *trackColor;
@property (nonatomic) double totalDuration;
@property (nonatomic, copy) NSString *trackID;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl21LunaSongMakerTeamInfo *lunaSongMakerTeamInfo;
@property (nonatomic, readonly) BOOL hasTranslation;
@property (nonatomic, readonly) BOOL isExpired;
@property (nonatomic) BOOL hideRequestLyric;

+ (id)encodingBehaviorsByPropertyKey;

- (void)insertSongMakerTeamInfoToLyricWithTeamInfo:(id)a0 totalDuration:(double)a1;
- (void)insertNoLyricHintIfNeedWithTotalDuration:(double)a0;
- (void)insertLyricContributorInfoIfNeedWithTotalDuration:(double)a0;
- (id)initWithTrackId:(id)a0 lyric:(id)a1 trackColor:(id)a2 totalDuration:(double)a3 lunaSongMakerTeamInfo:(id)a4 requestID:(id)a5;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
