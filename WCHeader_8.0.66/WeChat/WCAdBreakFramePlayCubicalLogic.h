@class NSString, WCAdBreakFrameView;

@interface WCAdBreakFramePlayCubicalLogic : WCAdBreakFramePlayBaseLogic <WCPlayerDownloaderExt, WCCanvasPageViewControllerExt, WCAdAlphaVideoViewDelegate>

@property (weak, nonatomic) WCAdBreakFrameView *adBreakFrameView;
@property (nonatomic) BOOL intentToPlay;
@property (nonatomic) double coverHideDelayInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBreakFrameInfo:(id)a0 dataItem:(id)a1 alphaVideoView:(id)a2 bTimelineScene:(BOOL)a3 adBreakFrameView:(id)a4;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)reset;
- (void)onCanvasViewDidBePushed;
- (void)onPlaybackTimeUpdate:(double)a0;
- (void)onPlayEnd:(BOOL)a0;
- (void)onPlayExit;
- (BOOL)matchBreakFrameVideoWithMediaId:(id)a0;
- (void)dealloc;
- (double)cubicalCoverHideDelayInterval;
- (void).cxx_destruct;

@end
