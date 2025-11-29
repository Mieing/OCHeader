@interface LVGeometryTool : NSObject

+ (struct CGSize { double x0; double x1; })lv_scaleAspectFitToMinSize:(struct CGSize { double x0; double x1; })a0 toMinSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lv_scaleAspectFit:(struct CGSize { double x0; double x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGSize { double x0; double x1; })lv_limitMinSize:(struct CGSize { double x0; double x1; })a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })lv_limitMaxSize:(struct CGSize { double x0; double x1; })a0 maxSize:(struct CGSize { double x0; double x1; })a1;

@end
