@interface MultiDeviceActionButton : MMUIButton

@property (nonatomic) unsigned long long action;

+ (id)buttonForAction:(unsigned long long)a0;
+ (BOOL)supportSelectForAction:(unsigned long long)a0;
+ (id)buttonTitleForAction:(unsigned long long)a0 selected:(BOOL)a1;
+ (id)buttonImageForAction:(unsigned long long)a0 highlighted:(BOOL)a1 selected:(BOOL)a2;
+ (double)imageSideLength;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)accessibilityTraits;

@end
