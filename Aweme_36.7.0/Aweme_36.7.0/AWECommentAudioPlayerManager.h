@class NSString, AWECommentAudioPlayer;
@protocol AWECommentAudioPlayerManagerDelegate;

@interface AWECommentAudioPlayerManager : NSObject <AWECommentAudioPlayerDelegate, AWECommentAudioPlayerManagerProcotol>

@property (retain, nonatomic) AWECommentAudioPlayer *player;
@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isPlayerPlaying;
@property (nonatomic) BOOL previousKeepAlive;
@property (nonatomic) BOOL isForcePause;
@property (nonatomic) BOOL audioEffectEnabled;
@property (nonatomic) BOOL needCookie;
@property (weak, nonatomic) id<AWECommentAudioPlayerManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL needContinueAudioPlayFromService;
@property (nonatomic) BOOL needContinueAudioPlayFromSystemNotice;

- (void)pauseAudio;
- (void)playAudioSeekToTime:(double)a0;
- (void)continueAudioPlay;
- (void)handleWillResignActive;
- (void)setAudioEffectEnable:(BOOL)a0;
- (void)handleDidEnterBackgroundNotification;
- (void)playerPlaying:(id)a0 currentTime:(double)a1;
- (void)playerDidStartedWithPlayer:(id)a0;
- (void)playerDidPausedWithPlayer:(id)a0;
- (void)playerDidStopedWithPlayer:(id)a0;
- (void)playerDidFinishedWithPlayer:(id)a0;
- (void)playerDidFailedWithPlayer:(id)a0;
- (void)playerDidLoadedPlayer:(id)a0;
- (void)handleAudioSessionInterruptionNotification:(id)a0;
- (void)handleWillBecomeUnavailable;
- (void)handleDidBecomeAvailable;
- (void)handleAudioSessionRouteChangeNotification:(id)a0;
- (void)handleInAppAudioNotification:(id)a0;
- (void)handlePauseAudioNotification:(id)a0;
- (void)postWillStartPlayNotification;
- (void)playAudioWithVideoModel:(id)a0 startTime:(double)a1 audioEffectExternInfo:(id)a2;
- (void)pauseAudioWithIsForce:(BOOL)a0;
- (void)postDidEndPlayNotification;
- (void)playAudioWithLocalUrlString:(id)a0 startTime:(double)a1;
- (void)playAudioWithVideoModel:(id)a0 startTime:(double)a1;
- (void)stopAudioWithIsForce:(BOOL)a0;
- (void)configPauseAudioReasonInfo:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleDidBecomeActive;

@end
