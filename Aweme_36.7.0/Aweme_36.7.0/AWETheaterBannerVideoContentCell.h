@class AWEVideoScreenRecordingBlocker, AWETheaterPlayVideoViewController;

@interface AWETheaterBannerVideoContentCell : AWETheaterBannerBaseContentCell

@property (retain, nonatomic) AWETheaterPlayVideoViewController *videoController;
@property (retain, nonatomic) AWEVideoScreenRecordingBlocker *screenCaptureBlocker;
@property (nonatomic) BOOL isShowingScreenBlockToast;

- (void)bindObserver;
- (void)updateCellPaymentWithModel:(id)a0;
- (void)configWithSectionItem:(id)a0 context:(id)a1 logExtraDict:(id)a2;
- (void)setAccessibility;
- (void)seekLastPlaybackTime;
- (void)recordPlaybackTime;
- (double)calculateStartTime;
- (BOOL)shouldPaymentChargePreviewConfig;
- (void)resetPlaybackTime;
- (void)trackHighlightPlay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)updateMuteStatus:(BOOL)a0;
- (BOOL)isPlaying;
- (void)stop;
- (void)reset;
- (void)setupUI;
- (void)handleTap;

@end
