@class WCWidgetPlayerParams, NSString, EditVideoBGMPlayer;

@interface WCWidgetPlayer : NSObject <WCAudioModuleDelegate, EditVideoBGMPlayerDelegate>

@property (retain, nonatomic) WCWidgetPlayerParams *params;
@property (retain, nonatomic) EditVideoBGMPlayer *bgmPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)dealloc;
- (void)_clear;
- (void)bindSuperview:(id)a0;
- (void)bindSuperview:(id)a0 aboveView:(id)a1;
- (BOOL)hasBoundSuperview:(id)a0;
- (void)bindSuperlayer:(id)a0;
- (void)bindSuperlayer:(id)a0 atZPosition:(double)a1;
- (BOOL)hasBoundSuperlayer:(id)a0;
- (void)unbindPlayer;
- (void)_unbindSuperview;
- (void)_unbindSuperlayer;
- (void)onPlayerRelayoutToSize:(struct CGSize { double x0; double x1; })a0 atOrigin:(struct CGPoint { double x0; double x1; })a1 scaleByHeight:(BOOL)a2;
- (void)onPlayerRelayoutToSize:(struct CGSize { double x0; double x1; })a0 atCenter:(struct CGPoint { double x0; double x1; })a1 scaleByHeight:(BOOL)a2;
- (void)onPlayerResumed;
- (void)_resumeOverlayView;
- (void)_resumeOverlayViewLayer;
- (void)_resumeBGMMusic;
- (void)onPlayerPaused;
- (void)_pauseOverlayView;
- (void)_pauseOverlayViewLayer;
- (void)_pauseBGMMusic;
- (void)onPlayerSeekedToTimeSec:(double)a0;
- (void)_seekOverlayViewToTimeSec:(double)a0;
- (void)_seekBGMMusicToTimeSec:(double)a0;
- (void)onPlayerStopped;
- (void)_stopOverlayView;
- (void)_stopBGMMusic;
- (void)onPlayerRestarted;
- (void)_restartOverlayView;
- (void)_restartBGMMusic;
- (void)onPlayerChangedMute:(BOOL)a0;
- (void)_changeMutedBGMMusic:(BOOL)a0;
- (BOOL)isPlayerMuted;
- (void)onPlayerChangeHidden:(BOOL)a0;
- (void)_changeHiddenOverlayView:(BOOL)a0;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)_updateAudioSession;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (void)_tryToUpdateBgmPlayerToMute:(BOOL)a0;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)a0;
- (void)_initBGMPlayerIfNeeded;
- (void).cxx_destruct;

@end
