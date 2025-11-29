@class ACCEditSingleVideoFakeProgressView, ACCEditSingleVideoSliderView, UILabel, UIPanGestureRecognizer, UIButton;
@protocol ACCCommonPlayControlBarDelegate;

@interface ACCCommonPlayControlBar : UIView

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *playBtn;
@property (retain, nonatomic) ACCEditSingleVideoSliderView *progressSlider;
@property (retain, nonatomic) ACCEditSingleVideoFakeProgressView *fakeProgressSlider;
@property (nonatomic) double showTime;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isSeeking;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isSliding;
@property (weak, nonatomic) id<ACCCommonPlayControlBarDelegate> delegate;

+ (id)playThumbImage;
+ (id)playMinimumTrackColor;
+ (id)maximumTrackColor;
+ (id)pauseMinimumTrackColor;
+ (id)pauseThumbImage;
+ (id)formatByTime:(unsigned long long)a0;

- (void)progressSliderValueChanged:(double)a0;
- (void)updatePlayStatus:(BOOL)a0;
- (void)didClickOnPlayButton;
- (void)progressSliderTouchBegan;
- (void)updatePlayTime:(double)a0 type:(unsigned long long)a1;
- (void)updateTotalDuration:(double)a0;
- (void)seekDidEnd;
- (void)progressSliderPanGesture:(id)a0;
- (void)progressSliderTouchEnded:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
