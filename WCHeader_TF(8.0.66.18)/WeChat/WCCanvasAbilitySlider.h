@class UIColor, UIImage;

@interface WCCanvasAbilitySlider : UISlider

@property (nonatomic) double backgroundHeight;
@property (retain, nonatomic) UIColor *frontgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *frontgroundImage;

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trackRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getImageWithColor:(id)a0;
- (id)getImageWithImage:(id)a0;
- (void).cxx_destruct;

@end
