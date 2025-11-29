@class NSArray, AWEDanmakuSliderPinConfig, UIView, AWEDanmakuSlider, UITapGestureRecognizer;
@protocol AWEDanmakuSettingsSliderDelegate;

@interface AWEDanmakuSettingsSlider : UIView

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) AWEDanmakuSlider *slider;
@property (copy, nonatomic) NSArray *pointList;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWEDanmakuSliderPinConfig *pinConfig;
@property (weak, nonatomic) id<AWEDanmakuSettingsSliderDelegate> delegate;

+ (Class)aAWEBrandColorAdapterClass;

- (id)aAWEBrandColorAdapter;
- (void)configPointList:(long long)a0;
- (void)hidePointAtIndex:(long long)a0;
- (id)configPointView;
- (void)makeMediumShock;
- (double)attachValueWithCurrentValue:(double)a0 shock:(BOOL)a1;
- (long long)attachToNearPoint:(double)a0 forceShock:(BOOL)a1;
- (void)seekValueAfterTouchEnd:(double)a0 forceShock:(BOOL)a1;
- (double)realValueWithCurrentValue:(double)a0;
- (id)drawSliderThumbImage;
- (void)sliderTouchBegin:(id)a0;
- (void)sliderTouchChanged:(id)a0;
- (void)sliderTouchEnd:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pinConfig:(id)a1 scene:(unsigned long long)a2;
- (void)seekToValuePercent:(double)a0;
- (void)seekToPoint:(long long)a0;
- (void)awe_setSliderAccessibilityValue:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)handleTapGesture:(id)a0;

@end
