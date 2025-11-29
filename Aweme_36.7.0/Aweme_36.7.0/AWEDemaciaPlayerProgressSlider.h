@class UIColor, NSString;

@interface AWEDemaciaPlayerProgressSlider : UISlider <AWEFeedProgressSliderProtocol>

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
@property (nonatomic) BOOL isUsedForMain;
@property (nonatomic) BOOL limitUpperActionArea;
@property (nonatomic) BOOL isV3SettingNotDefaultStyle;
@property (nonatomic) double hotZoneMinimumY;
@property (nonatomic) double hotZoneMaximumY;
@property (nonatomic) BOOL enableFixFeedProgress;

- (void)setValue:(float)a0 animatedDuration:(double)a1;
- (BOOL)isAccessibilityElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)accessibilityTraits;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
