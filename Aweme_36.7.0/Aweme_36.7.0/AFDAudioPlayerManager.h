@class NSString, AFDAudioPlayer;
@protocol AFDAudioPlayerManagerDelegate;

@interface AFDAudioPlayerManager : NSObject <AFDAudioPlayerDelegate, AFDAudioPlayerManagerProtocol>

@property (retain, nonatomic) AFDAudioPlayer *player;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isPlayerPlaying;
@property (nonatomic) BOOL previousKeepAlive;
@property (nonatomic) BOOL audioEffectEnabled;
@property (readonly, nonatomic) double currentTime;
@property (nonatomic) BOOL needContinueAudioPlayFromSystemNotice;
@property (weak, nonatomic) id<AFDAudioPlayerManagerDelegate> delegate;
@property (nonatomic) BOOL needCookie;
@property (nonatomic) BOOL needLoop;
@property (nonatomic) BOOL shouldIgnoreGlobeMute;
@property (nonatomic) BOOL disableShowMuteToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleDidEnterBackgroundNotification:(id)a0;
- (void)stopAudio;
- (void)pauseAudio;
- (void)playAudioSeekToTime:(double)a0;
- (void)continueAudioPlay;
- (void)configPlayerWithDirectPlayURLs:(id)a0 key:(id)a1;
- (void)configPlayerWithLocalUrlString:(id)a0;
- (void)setAudioEffectEnable:(BOOL)a0;
- (void)playerPlaying:(id)a0 currentTime:(double)a1;
- (void)playerDidStartedWithPlayer:(id)a0;
- (void)playerDidPausedWithPlayer:(id)a0;
- (void)playerDidFinishedWithPlayer:(id)a0;
- (void)playerDidFailedWithPlayer:(id)a0;
- (void)playerDidLoadedPlayer:(id)a0;
- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (void)handleAudioSessionRouteChangeNotification:(id)a0;
- (void)handleInAppAudioNotification:(id)a0;
- (void)handlePauseAudioNotification:(id)a0;
- (void)postWillStartPlayNotification;
- (void)postDidEndPlayNotification;
- (void)playerDidStoppedWithPlayer:(id)a0;
- (void)handleWillBecomeUnavailable:(id)a0;
- (void)handleDidBecomeAvailable:(id)a0;
- (void)showToastWhenZeroVolume;
- (void)trackTriggerPlayAudio;
- (void).cxx_destruct;
- (void)handleDidBecomeActive:(id)a0;
- (void)handleWillResignActive:(id)a0;
- (id)init;
- (void)dealloc;
- (void)playAudio;
- (id)createPlayer;

@end
