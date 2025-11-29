@interface DTFUIElementManager : NSObject

+ (id)generateUIViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andBackGroundColor:(id)a1 andAlpha:(float)a2;
+ (id)generateUIlabelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andColor:(id)a1 andFont:(id)a2 andAlpha:(float)a3 andBackGroundColor:(id)a4 andLineBreakMode:(long long)a5 andAlignment:(long long)a6;
+ (id)generateUIImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andImageName:(id)a1 andContentMode:(long long)a2;
+ (id)getResourceDir;
+ (id)generateUIImageWithName:(id)a0;

@end
