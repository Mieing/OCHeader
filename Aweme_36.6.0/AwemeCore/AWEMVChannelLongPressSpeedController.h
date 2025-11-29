@class AWEMVChannelLongPressRateView;

@interface AWEMVChannelLongPressSpeedController : AWEMVChannelPlayerCardBaseController

@property (retain, nonatomic) AWEMVChannelLongPressRateView *ratePlayView;
@property (nonatomic) BOOL shouldResponseGesture;
@property (nonatomic) double beforeLongPressPlayBackRate;
@property (nonatomic) double beginShowRateTime;
@property (nonatomic) BOOL isShowingRateView;

- (void)trackSpeedModePlayTime:(double)a0;
- (BOOL)shouldResponseGestureRecognizer:(id)a0;
- (BOOL)handleResponseGestureRecognizer:(id)a0;
- (void)bindEvents;
- (void)playBackSpeedChangeWithSpeed:(double)a0;
- (void)trackChangeSpeedMode;
- (void)hideRateView;
- (void)showRateView;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
