@class AWEPaymentPreviewSlider, UIView;
@protocol AAWEPublishPaymentPreviewProgressViewDelegate;

@interface AWEPublishPaymentPreviewProgressView : UIView

@property (retain, nonatomic) AWEPaymentPreviewSlider *progressSlider;
@property (retain, nonatomic) UIView *gestureView;
@property (retain, nonatomic) UIView *progressDotView;
@property (nonatomic) double maxRatio;
@property (nonatomic) BOOL isNormalStatus;
@property (nonatomic) BOOL isSliding;
@property (weak, nonatomic) id<AAWEPublishPaymentPreviewProgressViewDelegate> delegate;

- (void)progressSliderValueChanged:(id)a0;
- (void)updateProgressSliderToNormal;
- (void)updateProgressSliderToStrong;
- (void)sliderProgressSliderTouchEnded:(id)a0;
- (void)updateSliderValueWithGesture:(id)a0;
- (void)sliderProgressSliderTouchBegan:(id)a0;
- (void)updateCurrentTime:(double)a0 totalTime:(double)a1 animated:(BOOL)a2;
- (void)updateDotViewRatio:(double)a0;
- (void)updateMinimumTrackImage;
- (void).cxx_destruct;
- (id)init;
- (void)handleGesture:(id)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
