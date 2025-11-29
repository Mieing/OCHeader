@class NSString, NSMutableSet;

@interface WAJSContextPlugin_operateTing : WAJSContextPluginBase <TingFlowPlayerNotification, IWAJSContextPlugin_operateMusic>

@property (retain, nonatomic) NSString *curClientId;
@property (retain, nonatomic) NSMutableSet *setMusicWhiteListAppid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)playMusic:(id)a0 referrer:(id)a1;
- (BOOL)canAccessCurPlayer;
- (BOOL)curPlayerTaskActive;
- (BOOL)curPlayerIsPlaying;
- (BOOL)isWeAppAudioPlaying;
- (BOOL)isWeAppAudioPlayingWithClientId:(id)a0;
- (id)currentPlayingInfo;
- (id)currentPlayingPlayerState;
- (void)operateMusic:(id)a0 param:(id)a1;
- (BOOL)isPlaying;
- (BOOL)isPause;
- (void)pauseMusic;
- (void)stopMusic;
- (void)resumeMusic;
- (void)seekPlay:(float)a0;
- (double)getDuration;
- (id)getCurrentMusicId;
- (BOOL)monopolizeMusicPlayer;
- (void)setMusicMinimizationViewVisibleIfOccupied:(BOOL)a0;
- (id)generateMusicId:(id)a0 appTask:(id)a1;
- (void)flowPlayer:(id)a0 onPlayingContextUpdated:(id)a1;
- (void)flowPlayer:(id)a0 tingItem:(id)a1 onStatusChanged:(int)a2 onEvent:(int)a3 withContext:(id)a4 withEventContext:(id)a5 error:(id)a6;
- (void)onTingRecieveNextTrackControl;
- (void)onTingRecievePreTrackControl;
- (void)initConfigedMusicAppId;
- (void).cxx_destruct;

@end
