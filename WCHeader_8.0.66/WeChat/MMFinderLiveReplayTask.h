@class MMFinderLiveReplayTaskId, NSString, MMFinderLiveReplayView;

@interface MMFinderLiveReplayTask : MMFinderLiveTask

@property (readonly, nonatomic) MMFinderLiveReplayTaskId *replayTaskId;
@property (readonly, nonatomic) NSString *audioModeCoverImageUrlString;
@property (readonly, nonatomic) BOOL disableForwardByGlobalReplayConfig;
@property (nonatomic) BOOL isLivePausedBySlider;
@property (nonatomic) BOOL isLivePausedForCapture;
@property (nonatomic) BOOL isLivePausedForBarrage;
@property (nonatomic) BOOL isLivePausedReplayLiveForOuter;
@property (weak, nonatomic) MMFinderLiveReplayView *replayView;

- (id)initWithLiveContentVM:(id)a0;
- (id)createNewTaskId;
- (BOOL)handleConflictWithNewLive:(id)a0 navigationController:(id)a1;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)a0 selectedIndex:(id)a1 navigationController:(id)a2 tabType:(long long)a3 commentScene:(int)a4 replayEntryType:(id)a5 useVerticalFullscreenMinimization:(BOOL)a6 routeParam:(id)a7;
- (BOOL)innerPauseLiveForAudience;
- (BOOL)innerResumeLiveForAudience;
- (BOOL)isLiveClosed;
- (BOOL)needEnterLiveComplete;
- (void)checkPaidLiveTrialCountLimitReached;
- (id)getConflictWording;
- (id)createLiveViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andTaskId:(id)a1 andDelegate:(id)a2;
- (BOOL)isLivePause;
- (id)getLivePauseSceneDescription;
- (void)resumeLiveByMinimizeWindow;
- (void)resumeLiveByPIP;
- (id)getLiveMuteSceneDescription;
- (BOOL)pauseAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)pauseAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)pauseOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)isReplay;
- (BOOL)shouldForbidLandScapeForIphone;
- (BOOL)getCurrentShouldForbidLandscape;
- (BOOL)isLiveAudienceDisplayMode;
- (void)updateReplayRemoteVideoSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)muteLiveRemoteAudio;
- (BOOL)unMuteLiveRemoteAudio;
- (void)pauseLiveBySlider;
- (void)resumeLiveBySlider;
- (void)pauseLiveForCapture;
- (void)resumeLiveForUnCapture;
- (void)pauseLiveForBarrage;
- (void)resumeLiveForBarrage;
- (void)pauseReplayLiveForOuter;
- (void)resumeReplayLiveForOuter;
- (id)replayEntryType;
- (void).cxx_destruct;

@end
