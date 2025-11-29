@class ACCCameraSubscription, ACCEditBeautyFakeProgressSliderView, ACCEditSingleVideoSliderView, UIPanGestureRecognizer;

@interface ACCEditBeautyPlayerSliderProgressView : UIView

@property (retain, nonatomic) ACCEditSingleVideoSliderView *progressSlider;
@property (retain, nonatomic) ACCEditBeautyFakeProgressSliderView *fakeProgressSlider;
@property (nonatomic) BOOL isSliding;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) BOOL isHandleGesture;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) ACCCameraSubscription *subscription;

- (void)progressSliderValueChanged:(id)a0;
- (void)updateProgressSliderToNormal;
- (void)updateProgressSliderToWakeUp;
- (void)addFakeProgressSliderIfNeeds;
- (void)progressSliderTouchEnded:(id)a0 bySlideScreen:(BOOL)a1;
- (void)showFakeSliderIfNeeded;
- (void)restoreToNormalWhenTouchEnd;
- (void)progressSliderTouchEnded;
- (id)progressAlpha;
- (void)setMinTime:(double)a0 maxTime:(double)a1;
- (void)setPlayTime:(double)a0 animated:(BOOL)a1;
- (id)maximumTrackColor;
- (id)minimumTrackColor;
- (void)progressSliderPanGesture:(id)a0;
- (void)progressSliderTouchBegan:(id)a0;
- (void).cxx_destruct;
- (double)maxTime;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)minTime;
- (void)reset;
- (void)addSubscriber:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)removeSubscriber:(id)a0;
- (void)setupUI;

@end
