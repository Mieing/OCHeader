@class UILabel, NSString;

@interface AWEPlayInteractionLongVideoController : AWEPlayInteractionBaseController <AWEPlayInteractionPlayerLifeCycleProtocol, AWEAwemePlayInteractionLongVideoDelegate, AWEPlayInteractionLongVideoControllerProtocol>

@property (retain, nonatomic) UILabel *lastFiveSecondsToast;
@property (nonatomic) BOOL isReportUpdateSlider;
@property (nonatomic) BOOL longVideoViewDisappeared;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) BOOL isFromMixFeed;
@property (nonatomic) BOOL isLastVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoDidShrink;
- (void)videoDidMagnify;
- (void)updateProgressSliderWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (void)updatePlayProgressWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (void)setPlayProgressWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (BOOL)bizDowngradeProgressBarWhenDraw;
- (void)hashTagClicked:(id)a0;
- (void)markLongVideoAppear:(BOOL)a0;
- (void)showMixLastFiveSecondsToast:(long long)a0;
- (void)updatePlayerWithTime:(double)a0 totalDuration:(double)a1;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewDidDisappear;

@end
