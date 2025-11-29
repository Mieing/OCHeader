@interface BDVVisibleUtil : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewVisibleWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 coverRectArray:(id)a2;
+ (BOOL)isViewVisibleWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 aearRate:(double)a2;
+ (BOOL)isViewVisible:(id)a0 checkSuperView:(BOOL)a1 checkSuperViewClipBounds:(BOOL)a2;
+ (BOOL)isViewVisible:(id)a0 superView:(id)a1 checkSuperViewClipBounds:(BOOL)a2;
+ (BOOL)isViewVisible:(id)a0 checkSuperView:(BOOL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewVisibleRectWithView:(id)a0 coverRectArray:(id)a1;
+ (BOOL)floatEqual:(double)a0 f1:(double)a1;
+ (BOOL)isViewVisible:(id)a0;

@end
