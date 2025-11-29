@class WCSNSPlayerPanelOperationReporter;
@protocol FullScreenVideoProgressBarDelegate;

@interface WCPlayerFullScreenProgressBarBase : UIView

@property (weak, nonatomic) id<FullScreenVideoProgressBarDelegate> m_delegate;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isSliderScrubbing;
@property (retain, nonatomic) WCSNSPlayerPanelOperationReporter *playerPanelOperationReporter;

- (id)initWithSuper:(id)a0 totalTime:(double)a1 delegate:(id)a2 params:(id)a3;
- (void)reloadSliderStartTime;
- (void)updateTotalTime:(double)a0;
- (void)onPlayStart;
- (void)onPlayStop;
- (float)currentProgress;
- (void)resetPlayRateButtonIfNeed;
- (BOOL)shouldPlayingScrubbingEndAtTime;
- (void)isExpandingProgressWithAnimation:(BOOL)a0;
- (void).cxx_destruct;

@end
