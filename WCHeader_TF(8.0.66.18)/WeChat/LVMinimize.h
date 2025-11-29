@class LVMinimizeContext, NSString, WCFinderLandScapePlayCompleteTipsView, LVMinimizeContainerView, LVStarHandler;

@interface LVMinimize : NSObject <MinimizeTaskContainerInfoDelegate, IMinimizeTaskDelegateInterface, LVMinimizeContainerViewDelegate, WCFinderFeedContentMediaActionProtocol, WCFinderLandScapePlayCompleteTipsViewDelegate>

@property (retain, nonatomic) LVMinimizeContainerView *containerView;
@property (retain, nonatomic) LVMinimizeContext *minimizeContext;
@property (nonatomic) BOOL supportContinuePlay;
@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) WCFinderLandScapePlayCompleteTipsView *playCompleteTipsView;
@property (retain, nonatomic) LVStarHandler *starHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)minimizeContainerInfo:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)minimizeTaskData;
- (BOOL)checkCanMinimize:(BOOL)a0;
- (BOOL)canMinimize;
- (BOOL)hasMinimizeTask;
- (BOOL)isPlaying;
- (void)setMinimizeFold:(BOOL)a0;
- (void)_updateMinimize:(id)a0 context:(id)a1 playerView:(id)a2;
- (BOOL)_activeMinimize:(BOOL)a0;
- (void)activeMinimize:(id)a0 animated:(BOOL)a1;
- (void)deactiveMinimize:(BOOL)a0;
- (id)clearMinimize;
- (id)pauseMinimize;
- (id)resumeMinimize;
- (id)takeSnapshot:(id)a0;
- (void)onOutContentTask:(id)a0 replacedByAnotherTaskData:(id)a1;
- (BOOL)isMinimizeTaskPlaying:(id)a0;
- (void)minimizeContainerView:(id)a0 playPauseClicked:(id)a1;
- (void)minimizeContainerView:(id)a0 closeClicked:(id)a1;
- (void)minimizeContainerViewClicked:(id)a0;
- (void)_enterPlayerDetail:(BOOL)a0;
- (void)finderLandScapePlayCompleteTipsViewDidCountdownActionOver:(id)a0;
- (void)onSimplePlayerView:(id)a0 pictureInPictureStateDidChange:(long long)a1;
- (void)onSimplePlayerRestoreUserInterfaceForPictureInPictureStop:(id)a0;
- (void)onPlayerMuteByAudioModuleInterruptionBegin:(id)a0;
- (void)onPlayerUnMuteByAudioModuleInterruptionEnd:(id)a0;
- (void)onPlayerStateChanged:(unsigned long long)a0;
- (void)onVideoShowBufferingView;
- (void)onVideoHiddenBufferingView;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)contentMediaDidEndPlay:(id)a0;
- (void)_cancelPlayNext;
- (void)_playNextFeed;
- (void)_report:(id)a0 extraParams:(id)a1;
- (void)_reportEndPlay:(unsigned long long)a0;
- (void)_reportPlayTime;
- (BOOL)onEnterMinimizedTask:(id)a0 openContext:(id)a1 taskEnterScene:(unsigned int)a2;
- (void).cxx_destruct;

@end
