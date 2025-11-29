@interface CJPayLineUtil : NSObject

+ (id)addTopLineToView:(id)a0 marginLeft:(double)a1 marginRight:(double)a2 marginTop:(double)a3;
+ (void)removeTopLineFromView:(id)a0;
+ (id)addTopLineToView:(id)a0 marginLeft:(double)a1 marginRight:(double)a2 marginTop:(double)a3 color:(id)a4;
+ (void)removeBottomLineFromView:(id)a0;
+ (id)addBottomLineToView:(id)a0 marginLeft:(double)a1 marginRight:(double)a2 marginBottom:(double)a3 color:(id)a4;
+ (id)addBottomLineToView:(id)a0 marginLeft:(double)a1 marginRight:(double)a2 marginBottom:(double)a3;
+ (void)cj_drawLines:(unsigned long long)a0 withRoundedCorners:(unsigned long long)a1 radius:(double)a2 viewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 color:(id)a4;
+ (id)addRightLineToView:(id)a0 marginTop:(double)a1 marginBottom:(double)a2 marginRight:(double)a3;
+ (id)addBottomLineToView:(id)a0 lineHeight:(double)a1 marginLeft:(double)a2 marginRight:(double)a3 marginBottom:(double)a4 color:(id)a5;
+ (id)addRightLineToView:(id)a0 marginTop:(double)a1 marginBottom:(double)a2 marginRight:(double)a3 color:(id)a4;
+ (void)cj_drawLines:(unsigned long long)a0 withRoundedCorners:(unsigned long long)a1 radius:(double)a2 viewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (double)lineHeight;

@end
