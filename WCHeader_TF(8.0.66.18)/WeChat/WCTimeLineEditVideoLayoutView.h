@class NSMutableArray;

@interface WCTimeLineEditVideoLayoutView : WCEditVideoLayoutView

@property (retain, nonatomic) NSMutableArray *currentMusicLyrics;
@property (nonatomic) double currentLyricTotalTime;
@property (nonatomic) BOOL shouldRecoverLyricsWidget;
@property (nonatomic) BOOL shouldShowNewBGMPanel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initEditImageView;
- (BOOL)recoverBGMViewForEditVideoAttr:(id)a0;
- (void)_recoverLyricsWidget;
- (void)EditVideoBGMViewLyricOnOffStateChange:(BOOL)a0;
- (void)bgmSelectedViewController:(id)a0 didClickLyricOnBtn:(BOOL)a1;
- (void)onEditSuccess:(BOOL)a0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (unsigned long long)setBGMViewButtonOption;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)EditVideoBGMViewLyricUpdate:(id)a0 totalTime:(double)a1;
- (void)setPlayerTimeControlStatusChangeBlock;
- (void)updateLyricInfo:(id)a0 totoalTimeInSeconds:(double)a1;
- (BOOL)isLyricOn;
- (void)_updateLyricsWidgetTime;
- (BOOL)scrollViewDidZoom:(id)a0;
- (void)onBGMSelectedViewControllerInit;
- (id)createBGMPanelTabModels;
- (id)createBGMSelectedConfigWithPreferDuration:(unsigned long long)a0;
- (void)handleBGMSelectedViewController:(id)a0 didSelectedMusic:(id)a1;
- (void)handleBGMSelectedViewController:(id)a0 didChangeVisibleHeight:(double)a1;
- (void)adjustPreviewFrameToFitBGMPanel:(double)a0;
- (struct CGSize { double x0; double x1; })editVideoLayoutViewSize;
- (double)videoScaleForHalfScreenHeight:(double)a0;
- (void)onTimeLineEditVideoViewControllerWillTransitionToSize;
- (void).cxx_destruct;

@end
