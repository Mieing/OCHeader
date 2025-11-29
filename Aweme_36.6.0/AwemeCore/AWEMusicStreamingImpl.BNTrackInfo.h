@class NSString, NSArray, _TtC21AWEMusicStreamingImpl18LunaTrackHighlight, _TtC21AWEMusicStreamingImpl15LunaTrackLyrics, _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo, _TtC21AWEMusicStreamingImpl15LunaTrackChorus, _TtC21AWEMusicStreamingImpl11LunaURLInfo, _TtC21AWEMusicStreamingImpl14BNPlayLyricImp, _TtC21AWEMusicStreamingImpl9LunaTrack, _TtC21AWEMusicStreamingImpl18LunaPlayExtraModel, _TtC21AWEMusicStreamingImpl16LunaTrackPreview;

@interface AWEMusicStreamingImpl.BNTrackInfo : MTLModel {
    void /* unknown type, empty encoding */ _id;
    void /* unknown type, empty encoding */ _isFromPartial;
    void /* unknown type, empty encoding */ isPartial;
    void /* function */ fetchDay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extraModel;
}

@property (nonatomic, readonly) long long duration;
@property (nonatomic, readonly) double durationS;
@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl11LunaURLInfo *coverURLInfo;
@property (nonatomic) BOOL isCollected;
@property (nonatomic, readonly) BOOL onlySubscriberPlayable;
@property (nonatomic, readonly) NSString *newReleaseText;
@property (nonatomic, readonly) NSString *eventSttr;
@property (nonatomic, readonly) NSString *groupSettleLevel;
@property (nonatomic, readonly) NSArray *usersIdArr;
@property (nonatomic, readonly) NSString *totalUsersID;
@property (nonatomic, readonly) NSArray *artistsIdArr;
@property (nonatomic, readonly) BOOL isPlayableForCopyright;
@property (nonatomic, readonly) NSString *totalArtistsID;
@property (nonatomic, readonly) BOOL canShare;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl16LunaTrackPreview *preview;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaTrackHighlight *highlight;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaTrackChorus *chorus;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaTrackLabelInfo *labelInfo;
@property (nonatomic, readonly) NSArray *lyricsLineText;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaTrack *track;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl14BNPlayLyricImp *lyric;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl15LunaTrackLyrics *trackLyric;
@property (nonatomic, copy) NSString *fetchDay;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaPlayExtraModel *extraModel;

+ (id)encodingBehaviorsByPropertyKey;

- (id)songtabGredientColors;
- (id)artistsArr;
- (long long)lyricsLineTextIndexWithTime:(double)a0;
- (id)media;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
