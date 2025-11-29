@class NSString;

@interface AWEDPlayerComponentVideoPlayer : AWEDPlayerBaseComponent <AWECommentSearchMusicMessage, AWEAudioFocusProtocol>

@property (nonatomic) BOOL skipDouPlusToastRemove;
@property (nonatomic) BOOL alreadyRecordPlayCompletion;
@property (nonatomic) BOOL isPlayFailedShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)updatePlayerController:(id)a0 withPlayVideoVC:(id)a1;
- (void)updatePlayerIfNeeded;
- (void)prepareForDisplayWithoutCoverImage;
- (BOOL)pauseIfNotStop;
- (void)screenCapturedDidChange:(id)a0;
- (BOOL)shouldPauseWhenPlayerStartPlay:(id)a0;
- (BOOL)audioIsPlaying;
- (void)audioPause;
- (BOOL)isPaidMixScreenRecording;
- (BOOL)enableFeedDuplicateFilterLog;
- (void)commentSearchMusicDidStartPlay;
- (void)playerTimerRegisterWithNotification:(id)a0;
- (void)startFollowFeedAlbumVideoPlayEndObserve;
- (void)trackVideoInfoWhenEnterBackground;
- (void)updatePrerenderConfiguration;
- (void)trackRecordClearScreenTime;
- (void)trackReportClearScreenTime;
- (void)handlePlayerWillLoopInBackground;
- (void)trackAntiVideoLoadSuccess:(BOOL)a0 withModel:(id)a1 errorCode:(long long)a2;
- (BOOL)shouldDenyFailureToast;
- (void)handlePlayerDidChangePlaybackStateWithAction:(long long)a0;
- (void)insertPlayerViewIfNeeded;
- (BOOL)fixSearchVideoPlayError;
- (void)playerWillLoopPlaying:(id)a0;
- (void)prepareForDisplay;
- (void)setModel:(id)a0;
- (BOOL)pause;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)play:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)addObservers;
- (BOOL)pauseIfPlaying;

@end
