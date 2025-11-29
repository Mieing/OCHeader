@class WCAdBreakFrameView;

@interface WCAdFullCardBreakFrameSightView : WCTimeLineAdFullCardSightView

@property (nonatomic) BOOL intentToPlay;
@property (nonatomic) double fullCardVideoDownloadProgress;
@property (nonatomic) double breakFrameVideoDownloadProgress;
@property (weak, nonatomic) WCAdBreakFrameView *adBreakFrameView;

- (void)customPlayerInfo:(id)a0;
- (unsigned long long)fetchPlayModeIfVideoNotExist;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (void)onPlayerStartPlay:(id)a0;
- (void)onPlayerPausePlay:(id)a0;
- (void)onUpdateCurrentVideoTime:(double)a0;
- (void)OnCdnDownloadSuccess:(id)a0;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onCanvasViewDidBePushed;
- (BOOL)isBreakFrameAd;
- (BOOL)isAllVideoDataAvailable;
- (BOOL)matchFullCardVideoWithMediaId:(id)a0;
- (BOOL)matchBreakFrameVideoWithMediaId:(id)a0;
- (void)updateControlViewDownloadProgress;
- (void).cxx_destruct;

@end
