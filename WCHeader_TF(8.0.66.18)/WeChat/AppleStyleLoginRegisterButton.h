@class NSString;

@interface AppleStyleLoginRegisterButton : UIButton

@property (nonatomic) long long style;
@property (nonatomic) long long alignment;
@property (nonatomic) BOOL useFlexibleWidth;
@property (retain, nonatomic) NSString *svgIconName;
@property (nonatomic) double cornerRadius;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImage;
- (void)updateFlexibleWidth;
- (id)styleContentColor;
- (id)styleBackgroundColor;
- (id)styleBorderColor;
- (double)styleBorderWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
