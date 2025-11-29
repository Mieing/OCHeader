@class UIView, CAShapeLayer;

@interface ACCExposureSlider : UISlider

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } thumbBackgroundClearRect;
@property (retain, nonatomic) CAShapeLayer *minTrackMaskLayer;
@property (retain, nonatomic) CAShapeLayer *maxTrackMaskLayer;
@property (retain, nonatomic) UIView *originMinTrackView;
@property (retain, nonatomic) UIView *originMaxTrackView;
@property (retain, nonatomic) UIView *originThumbView;
@property (nonatomic) double trackHeight;
@property (nonatomic) struct CGSize { double width; double height; } thumbSize;
@property (nonatomic, getter=isThumbBackgroundClear) BOOL thumbBackgroundClear;
@property (nonatomic) double thumbMargin;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) BOOL trackHidden;
@property (nonatomic) double trackAlpha;

- (void)updateSubViews;
- (void)p_updatePathForMaskLayer:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)setThumbScale:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)init;
- (void)layoutSubviews;

@end
