@class UIImage;

@interface WXHighlightableVideoSlider : WXVideoSlider

@property (nonatomic) BOOL hasTouched;
@property (retain, nonatomic) UIImage *interactiveFrontgroundImage;
@property (retain, nonatomic) UIImage *interactiveBackgroundImage;
@property (retain, nonatomic) UIImage *customDotActiveImage;
@property (retain, nonatomic) UIImage *customDotInactiveImage;

- (id)dotImage;
- (id)getBackgroundImage;
- (id)getFrontgroundImage;
- (id)getBackgroundImage:(BOOL)a0;
- (id)getFrontgroundImage:(BOOL)a0;
- (id)imageWithHeight:(double)a0 alpha:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 trackRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 value:(float)a2;
- (void).cxx_destruct;

@end
