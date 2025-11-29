@class AWEDelayRecordCoverView, UIView, AWECountDownBarChartView, AWEAudioWaveformView, UIImageView, ACCCountDownModel, UILabel, DVESegmentClipBorderView;
@protocol AWEAudioWaveformHanderSliderViewDelegate;

@interface AWEAudioWaveformHanderSliderView : UIView

@property (nonatomic) double positionPercent;
@property (nonatomic) double maxDuration;
@property (retain, nonatomic) AWEAudioWaveformView *waveformView;
@property (retain, nonatomic) UIView *nomuiscWaveformView;
@property (retain, nonatomic) AWECountDownBarChartView *waveBarView;
@property (retain, nonatomic) UIImageView *nomuiscWaveformUpImageView;
@property (retain, nonatomic) UIImageView *nomuiscWaveformDownImageView;
@property (retain, nonatomic) UIImageView *controlView;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UILabel *bottomLeftLabel;
@property (retain, nonatomic) UILabel *bottomRightLabel;
@property (retain, nonatomic) UILabel *bottomMiddleLabel;
@property (retain, nonatomic) UIView *clipView;
@property (retain, nonatomic) UIView *innerBorderView;
@property (retain, nonatomic) DVESegmentClipBorderView *borderView;
@property (retain, nonatomic) AWEDelayRecordCoverView *coverView;
@property (retain, nonatomic) UIView *rightArrowView;
@property (retain, nonatomic) UIImageView *rightLineView;
@property (weak, nonatomic) id<AWEAudioWaveformHanderSliderViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateMusicBlock;
@property (nonatomic) BOOL usingBarView;
@property (retain, nonatomic) ACCCountDownModel *countDownModel;

- (void)moveControlView:(id)a0 type:(unsigned long long)a1;
- (double)waveBarCountForFullWidth;
- (void)updateWaveUIWithVolumes:(id)a0;
- (void)updateRightLabelWithMaxDuration:(double)a0;
- (void)moveControlViewByCodeWithPercent:(double)a0;
- (void)updateMiddleLableWithCenterX:(double)a0;
- (void)setuClipView;
- (void)hanldePositionPercentChanged;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityIncrement;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
