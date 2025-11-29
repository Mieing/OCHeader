@class NSArray, NSMutableDictionary, NSString;
@protocol AWEFeedTrackControllerProtocol;

@interface AWEFeedPlayControlService : AWEFeedContainerBaseService <AWEFeedPlayControlServiceProtocol, AWEFeedTableViewCellControllerPlayerDelegate>

@property (copy, nonatomic) NSArray *listeners;
@property (retain, nonatomic) NSMutableDictionary *respondSelectorControllerCacheDict;
@property (nonatomic) long long playState;
@property (nonatomic) double playTimeStamp;
@property (nonatomic) double startTimestamp;
@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> trackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pauseWithAnimation;
- (void)playWithAnimation;
- (void)pauseWithAnimationUsingCustomPauseIcon:(id)a0;
- (void)holdStopPlayer;
- (void)playIfActive;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)videoBufferingPrepared:(id)a0;
- (void)modernVideoBufferingPrepared:(id)a0;
- (void)videoCacheEndedWhenPlay:(id)a0;
- (void)videoBufferLoadEnough:(id)a0;
- (void)videoBufferLoadNotEnough:(id)a0;
- (void)videoPlayer:(id)a0 didSingleClick:(id)a1;
- (BOOL)shouldHideCellViewControllerTopGradientView:(id)a0;
- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)videoPlayer:(id)a0 didStartPlayPreventedWithReason:(id)a1;
- (void)videoPlayer:(id)a0 playbackFailedWithError:(id)a1;
- (void)videoPlayer:(id)a0 didChangePlaybackRate:(double)a1;
- (BOOL)shouldPreventVideoControllerPlay:(id)a0;
- (BOOL)shouldCellViewControllerShowAudioInterruptionToast:(id)a0;
- (void)cellVideoControllerDidReadyForDisplay:(id)a0;
- (void)addNotifications;
- (void)trackStayTime;
- (BOOL)shouldPreventPlayBeforePlayStateChanged;
- (BOOL)shouldPreventPlayAfterPlayStateChanged;
- (BOOL)shouldPreventPlayCell:(id)a0 indexPath:(id)a1;
- (BOOL)shouldPreventPlayIfActive;
- (BOOL)shouldPreventPauseBeforePlayStateChanged;
- (void)setupInitialParams;
- (void)trackFeedPlayLog:(id)a0;
- (void)trackFeedPlayLog:(id)a0 extraInfo:(id)a1;
- (void)playStateChangeToStop;
- (id)findListenersBySelector:(SEL)a0;
- (void)didReceiveAwemeBaseViewControllerClickPlayNotification:(id)a0;
- (void)didReceiveAWEPlayVideoViewControllerVideoRequestResponseNotification:(id)a0;
- (void)playStateChangeToPause;
- (void)didReceivceApplicationDidBecomeActiveNotification:(id)a0;
- (id)notificationNamesForScenes;
- (void)holdStopPlayerOptimizeForScenes:(id)a0;
- (void)holdStopPlayerSceneWithDelayTime:(double)a0;
- (void)updateStartTimestamp:(double)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (void)stop;
- (void)seekToTime:(double)a0;
- (void)playVideo:(id)a0;

@end
