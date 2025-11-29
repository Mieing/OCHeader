@class UIColor, NSString, UIView, UITapGestureRecognizer;
@protocol AWETeenModePlayerProgressSliderDelegate;

@interface AWETeenModePlayerProgressSlider : UISlider <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *playableTrack;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastBounds;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWETeenModePlayerProgressSliderDelegate> delegate;
@property (nonatomic) double hotZoneMinimumY;
@property (nonatomic) double hotZoneMaximumY;
@property (nonatomic) double percentage;
@property (nonatomic) BOOL isUsedForMain;
@property (nonatomic) BOOL limitUpperActionArea;
@property (nonatomic) BOOL clickable;
@property (nonatomic) BOOL showPlayableTrack;
@property (nonatomic) double playableValue;
@property (retain, nonatomic) UIColor *playableTrackTintColor;
@property (nonatomic) double trackHeight;
@property (nonatomic) double thumbScaleRatio;
@property (nonatomic) BOOL thumbAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindAction;
- (void)setThumbView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)p_updatePlayableTrackIfNeeded;
- (void)p_singleTapGesture:(id)a0;
- (id)defaultThumbView;
- (struct CGSize { double x0; double x1; })defaultThumbSize;
- (void)p_valueChanged;
- (void)p_touchBegan;
- (void)p_touchEnded;
- (void)p_thumbHighlightedWithCompletion:(id /* block */)a0;
- (void)p_thumbLowlightedWithCompletion:(id /* block */)a0;
- (void)setThumbImage:(id)a0 forState:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
