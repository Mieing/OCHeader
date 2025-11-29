@class UIColor;

@interface MMMusicSlider : UISlider

@property (retain, nonatomic) UIColor *frontgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1 frontgroundColor:(id)a2;
- (void)resetView;
- (id)getTrackImage:(id)a0;
- (id)getDotImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void).cxx_destruct;

@end
