@class NSString;
@protocol AWEBeautySliderDelegate;

@interface AWEBeautySlider : AWERangeSlider {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
    BOOL _enableSliderAdsorbToDefault;
}

@property (nonatomic) BOOL isTapTicOn;
@property (nonatomic) long long lastValue;
@property (nonatomic) long long defaultValue;
@property (nonatomic) long long realDefaultValue;
@property (weak, nonatomic) id<AWEBeautySliderDelegate> beautySliderDelegate;
@property (readonly, copy, nonatomic) NSString *nodeId;
@property (readonly, copy, nonatomic) NSString *nodeName;
@property (nonatomic) long long realMinValue;
@property (nonatomic) long long realMaxValue;
@property (nonatomic) BOOL isSliding;

- (void)sliderTouchBegan:(id)a0;
- (void)sliderTouchEnded:(id)a0;
- (void)updateNodeId:(id)a0 nodeName:(id)a1;
- (void)updateMinValue:(long long)a0 maxValue:(long long)a1 defaultValue:(long long)a2;
- (void)updateRealValue:(long long)a0;
- (void)turnOffTapTic;
- (void)turnOnTapTic;
- (void)setEnableSliderAdsorbToDefault:(BOOL)a0;
- (BOOL)isMidSilderStatus;
- (void)generateLightImpactIfNeeded;
- (void)rangeSliderValueChange:(id)a0 forEvent:(id)a1;
- (long long)p_convertValueToRealValue:(float)a0;
- (void)p_updateSlidingStateAndNotify:(BOOL)a0;
- (void)p_changeLastValueAndNotifyValueChanged:(long long)a0;
- (void)p_absorbToDefaultValueIfNeeded;
- (void)p_notifyFinishSlidingWithValue:(double)a0;
- (BOOL)enableSliderAdsorbToDefault;
- (BOOL)isFixXcode26Status;
- (void)sliderTouchStationary:(id)a0;
- (void)sliderTouchMoved:(id)a0;
- (void)sliderTouchCancelled:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (id)accessibilityHint;
- (void)accessibilityDecrement;
- (void)setValue:(float)a0 animated:(BOOL)a1;
- (void)accessibilityIncrement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityValue;

@end
