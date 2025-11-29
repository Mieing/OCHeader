@class MMTimer, NSMutableDictionary, NSString;

@interface WCCanvasMusicMgr : NSObject <IMusicPlayerExt, VoiceComponentExt>

@property (retain, nonatomic) NSMutableDictionary *musicPlayDic;
@property (retain, nonatomic) MMTimer *playMonitorTimer;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSString *pausedMusicIdWhenNotVisible;
@property (nonatomic) unsigned long long lastSeekTimestampMs;
@property (nonatomic) BOOL isCanvasPageVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)resignActive;
- (void)becomeActive;
- (void)tryToPauseWhenDisappear;
- (void)tryToResumeWhenAppear;
- (void)setMusicComponentItem:(id)a0 andMusicInfo:(id)a1 andDefaultDuration:(double)a2 forMusicId:(id)a3;
- (void)removeMusic:(id)a0;
- (void)playMusic:(id)a0;
- (void)playOrResumeMusic:(id)a0;
- (void)pauseMusic:(id)a0;
- (void)stopMusic:(id)a0;
- (void)seekMusic:(id)a0 seekTime:(double)a1;
- (void)stopAllMusic;
- (void)stopCurrentPlayer;
- (long long)getPlayState:(id)a0;
- (double)getDuration:(id)a0;
- (double)getCurrentTime:(id)a0;
- (BOOL)isPlaying:(id)a0;
- (BOOL)isCanvasMusicPlaying;
- (id)getAllMusicPlayInfo;
- (id)getMusicPlayInfo:(id)a0;
- (BOOL)hasMusicPlayInfo:(id)a0;
- (id)getCurrentPlayerMusicId;
- (long long)getCurrentPlayerPlayState;
- (id)getMusicPlayInfoForCurrentPlayer;
- (BOOL)hasMusicPlayInfoForCurrentPlayer;
- (BOOL)isCurrentPlayer:(id)a0;
- (void)notifyMusicPlayStatusChanged:(id)a0 playState:(long long)a1;
- (void)notifyMusicPlayTimeChanged:(id)a0 currentTime:(double)a1 duration:(double)a2;
- (void)notifyMusicPlayError:(id)a0 errorInfo:(id)a1;
- (void)notifyVoiceComponentHasPlayWithSound:(id)a0;
- (void)checkAndUpdatePlayState;
- (void)checkAndSetupPlayMonitorTimer;
- (void)checkPlayerStartTime;
- (BOOL)isPlayingState:(long long)a0;
- (BOOL)isPendingToPlayWhenVisible:(id)a0;
- (void)startPlayer:(id)a0;
- (void)stopPlayer;
- (void)pausePlayer;
- (void)resumePlayer;
- (void)seekPlayer:(double)a0 playAuto:(BOOL)a1;
- (void)onMusicPlayStatusChanged;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)onVoiceComponentHasPlayWithSound:(id)a0;
- (void)setupPlayMonitorTimer;
- (void)stopPlayMonitorTimer;
- (void)onPlayMonitorTimerFired;
- (void).cxx_destruct;

@end
