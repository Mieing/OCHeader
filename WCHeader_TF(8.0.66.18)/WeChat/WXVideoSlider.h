@class UIImage, UIColor;

@interface WXVideoSlider : UISlider

@property (retain, nonatomic) UIImage *dotImage;
@property (retain, nonatomic) UIImage *frontgroundImage;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIColor *frontgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double dotImgOverScrollMode;
@property (nonatomic) double sliderHeight;
@property (nonatomic) double additionalSliderHeightWhenHighlighted;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)initView;
- (void)setAnimateHighlighted:(BOOL)a0 dotImage:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getBackgroundImage:(BOOL)a0;
- (id)getFrontgroundImage:(BOOL)a0;
- (void).cxx_destruct;

@end
