@class NSString, UIView, UIPanGestureRecognizer, AWEDemaciaPlayerProgressSlider;
@protocol AWEProgressContainerViewDelegate, AWEProgressDecoratorViewProtocol;

@interface AWEProgressContainerView : UIView <UIGestureRecognizerDelegate, AWEProgressContainerViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEDemaciaPlayerProgressSlider *progressSlider;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UIView *progressSliderUnderView;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (weak, nonatomic) id<AWEProgressContainerViewDelegate> delegate;
@property (retain, nonatomic) UIView<AWEProgressDecoratorViewProtocol> *decoratorView;
@property (nonatomic) BOOL enablePanGesture;
@property (nonatomic) double currentPercentage;
@property (nonatomic) double minimumValue;
@property (nonatomic) double maximumValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setThumbImage:(id)a0;
- (void)configUI;
- (id)defaultThumbImage;
- (void)progressViewTouchBeganWithStart:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchChangedWithLastPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)progressViewTouchEndedWithEndPoint:(struct CGPoint { double x0; double x1; })a0 targetView:(id)a1 triggerType:(unsigned long long)a2;
- (void)setSliderHeight:(double)a0;
- (void)resetPanGesture;
- (void)progressSliderValueChanged:(id)a0 event:(id)a1;
- (void)progressSliderTouchBegan:(id)a0 event:(id)a1;
- (void)progressSliderTouchEnded:(id)a0 event:(id)a1;
- (void)setCurrentPercentage:(double)a0 animate:(BOOL)a1;
- (void)setHideUnderView:(BOOL)a0;
- (void)setUnderViewHeight:(double)a0;
- (void)setUnderViewBackgroundColor:(id)a0;
- (void)setSliderEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setSliderCornerRaidus:(double)a0;
- (void)setMinimumTrackImage:(id)a0;
- (void)setMaximumTrackImage:(id)a0;
- (void)shouldUseThumbHeightAsHotZoneMaximumOffsetY:(BOOL)a0;
- (void)setHotZoneMinimumOffsetY:(double)a0;
- (void)setHotZoneMaximumOffsetY:(double)a0;
- (void)addPanGesture;
- (id)accessibilityLabel;
- (void)setThumbImage:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setMinimumTrackTintColor:(id)a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setMaximumTrackTintColor:(id)a0;
- (void)layoutSubviews;
- (void)setThumbTintColor:(id)a0;
- (void)panGesture:(id)a0;

@end
