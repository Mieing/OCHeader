@class NSString;

@interface WAJSContextPlugin_operateMusic : WAJSContextPluginBase <IMusicPlayerExt, IRemoteControlMusicPlayerExt, IWAJSContextPlugin_operateMusic>

@property (retain) NSString *currentMusic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)playMusic:(id)a0;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (void)pauseMusic;
- (void)resumeMusic;
- (void)stopMusic;
- (void)seekPlay:(float)a0;
- (double)getDuration;
- (id)generateMusicId:(id)a0;
- (id)getCurrentMusicId;
- (BOOL)monopolizeMusicPlayer;
- (BOOL)curPlayerIsPlaying;
- (void)setMusicMinimizationViewVisibleIfOccupied:(BOOL)a0;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void)onPlayMusic:(id)a0 fromScene:(long long)a1;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void).cxx_destruct;

@end
