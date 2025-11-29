@class NSString, OMJMusicInfo;

@interface OMCMusicSegment : OMCClipSegment

@property (readonly, nonatomic) struct SharedPtr<XMSMusicSegment> { struct XMSMusicSegment *x0; } backingMusicSegment;
@property (readonly, nonatomic) OMJMusicInfo *musicInfo;
@property (readonly, nonatomic) NSString *musicFilePath;
@property (readonly, nonatomic) NSString *lyricStyleID;
@property (readonly, nonatomic) NSString *lyricFontName;
@property (readonly, nonatomic) NSString *lyricFontNameInMaterial;
@property (readonly, nonatomic) NSString *lyricColorStyleID;
@property (nonatomic) BOOL isStartTimeConstraintEnabled;
@property (nonatomic) BOOL isEndTimeConstraintEnabled;

- (BOOL)isLyricsEnabled;
- (BOOL)showLyrics;
- (void)hideLyrics;
- (BOOL)updateLyricStyleWithID:(id)a0;
- (BOOL)replaceMusicWithMusicInfo:(id)a0 musicFilePath:(id)a1 lyricStyleID:(id)a2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 isLooping:(BOOL)a4;
- (BOOL)updateLyricFontName:(id)a0;
- (BOOL)updateLyricColorStyleWithID:(id)a0;

@end
