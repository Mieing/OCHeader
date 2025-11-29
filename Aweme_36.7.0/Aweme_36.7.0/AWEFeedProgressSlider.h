@class UIColor, NSString, UIImage, UIView, CALayer, UILongPressGestureRecognizer;
@protocol AWEFeedProgressSliderDelegate;

@interface AWEFeedProgressSlider : UIView <UIGestureRecognizerDelegate, AWEFeedProgressSliderProtocol> {
    CALayer *_sliderLeftLayer;
    CALayer *_thumbContainerLayer;
    CALayer *_thumbLayer;
    struct CGSize { double width; double height; } _thumbSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _priviousBounds;
    double _currentWidth;
    double _currentHeight;
    double _currentLeftWidth;
    double _YOffset;
    double _minOffset;
    UIView *_containerView;
    UILongPressGestureRecognizer *_thumbGesture;
    double _sliderThumbLeftRightOffset;
    double _sliderThumbTopOffset;
    double _sliderThumbHotZoneOffset;
}

@property (retain, nonatomic) UIView *sliderRightView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nextAimFrame;
@property (retain, nonatomic) UIColor *nextMinColor;
@property (retain, nonatomic) UIColor *nextMaxColor;
@property (retain, nonatomic) UIImage *nextThumb;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } nextThumbSize;
@property (weak, nonatomic) id<AWEFeedProgressSliderDelegate> progressSliderDelegate;
@property (nonatomic) BOOL hideContainer;
@property (copy, nonatomic) id /* block */ shouldNotExpendHotzoneBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float value;
@property (nonatomic) float maximumValue;
@property (nonatomic) float minimumValue;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (nonatomic) BOOL limitUpperActionArea;
@property (nonatomic, getter=isContinuous) BOOL continuous;
@property (nonatomic) BOOL isV3SettingNotDefaultStyle;
@property (nonatomic) double hotZoneMinimumY;
@property (nonatomic) double hotZoneMaximumY;
@property (nonatomic) BOOL isUsedForMain;

- (BOOL)shouldUseAnimation;
- (void)setValue:(float)a0 animatedDuration:(double)a1;
- (void)updateUIWithAnimation:(BOOL)a0 duration:(double)a1 forceUpdate:(BOOL)a2;
- (void)handleProgressGesture:(id)a0;
- (void)cancelUpdateSliderFrame;
- (void)updateSliderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 height:(double)a1 originY:(double)a2 minColor:(id)a3 maxColor:(id)a4 thumb:(id)a5 thumbSize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6;
- (void)setThumbHotZoneOffset:(double)a0;
- (BOOL)isAccessibilityElement;
- (void)setThumbImage:(id)a0 forState:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setHidden:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityIncrement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityValue;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;
- (void)setupUI;
- (void)setThumbSize:(struct CGSize { double x0; double x1; })a0;

@end
