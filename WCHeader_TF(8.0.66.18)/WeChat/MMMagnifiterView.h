@class UIImageView, ScreenshotView;

@interface MMMagnifiterView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) ScreenshotView *screenshotView;
@property (nonatomic) double width;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTouchPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setViewToMagnify:(id)a0;
- (void).cxx_destruct;

@end
