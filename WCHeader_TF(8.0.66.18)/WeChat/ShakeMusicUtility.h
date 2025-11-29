@class MMMusicInfo, NSString;

@interface ShakeMusicUtility : MMUserService <IMusicPlayerExt, MMServiceProtocol>

@property (retain, nonatomic) MMMusicInfo *lastPlayingMusic;
@property (nonatomic) double lastMusicOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)getCopyRightWithShakeMusicInfo:(id)a0;
+ (id)genReportSongId:(unsigned int)a0;

- (void)recordPlayingMusicAndPause:(BOOL)a0;
- (void)resumeLastPlayingMusic;
- (void)clearLastPlayingMusic;
- (BOOL)isLastPlayMusicExists;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void).cxx_destruct;

@end
