@class UIColor, NSString, UIImageView, UIView, UILongPressGestureRecognizer;
@protocol AWEIMAwemeMediaDisplayVideoSliderDelegate;

@interface AWEIMAwemeMediaDisplayVideoSlider : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *sliderRightView;
@property (retain, nonatomic) UIView *sliderLeftView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (nonatomic) double currentWidth;
@property (nonatomic) double currentHeight;
@property (nonatomic) double currentLeftWidth;
@property (retain, nonatomic) UILongPressGestureRecognizer *thumbGesture;
@property (nonatomic) double YOffset;
@property (nonatomic) double minOffset;
@property (nonatomic) double sliderThumbLeftRightOffset;
@property (nonatomic) double sliderThumbTopOffset;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousBounds;
@property (nonatomic) double value;
@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (weak, nonatomic) id<AWEIMAwemeMediaDisplayVideoSliderDelegate> progressSliderDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)progressNormalThumbWidth;
+ (double)progressNormalThumbHeight;
+ (double)progressNormalHeight;

- (BOOL)shouldUseAnimation;
- (void)setValue:(double)a0 animatedDuration:(double)a1;
- (void)updateUIWithAnimation:(BOOL)a0 duration:(double)a1 forceUpdate:(BOOL)a2;
- (void)handleProgressGesture:(id)a0;
- (void)updateState:(unsigned long long)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
