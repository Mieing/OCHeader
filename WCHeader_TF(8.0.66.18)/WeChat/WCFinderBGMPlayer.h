@class NSString, RecommendedMusicInfo, EditVideoBGMPlayer;
@protocol WCFinderBGMPlayerDelegate;

@interface WCFinderBGMPlayer : NSObject <WCAudioModuleDelegate, EditVideoBGMPlayerDelegate>

@property (retain, nonatomic) EditVideoBGMPlayer *player;
@property (nonatomic) BOOL hasPerformPlay;
@property (nonatomic) BOOL isRealPlaying;
@property (nonatomic) BOOL registerBackgroundNotify;
@property (nonatomic) BOOL interreptByEnterBackground;
@property (nonatomic) BOOL needResumeWhenAudioModuleIdle;
@property (nonatomic) BOOL needObserve;
@property (retain, nonatomic) id progressObserver;
@property (nonatomic) double progress;
@property (nonatomic) BOOL lastStartActiveFail;
@property (nonatomic) BOOL isRegisterAudioModule;
@property (nonatomic) BOOL loop;
@property (weak, nonatomic) id<WCFinderBGMPlayerDelegate> delegate;
@property (nonatomic) BOOL isPlaying;
@property (retain, nonatomic) RecommendedMusicInfo *musicInfo;
@property (nonatomic) BOOL allowsExternalPlayback;
@property (nonatomic) BOOL playOnSystemMutedState;
@property (nonatomic) BOOL interruptedWhenAppResignActive;
@property (readonly, nonatomic) double currentTime;
@property (nonatomic) BOOL autoStartWhenAudioModuleActiveFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)audioIdentifier;
- (void)mute:(BOOL)a0;
- (BOOL)start;
- (void)stop;
- (BOOL)resume;
- (BOOL)_resume;
- (void)pause;
- (void)_pause;
- (void)seek:(double)a0;
- (void)_observePlayerProgress;
- (void)onProgressChanged:(double)a0;
- (BOOL)tryActive;
- (void)deactive;
- (void)releaseAudioModuleRegisterDuty;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)a0;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void).cxx_destruct;

@end
