@interface AWEMRImageColorContrastUtil : NSObject

+ (double)contrastRatioBetweenColor:(id)a0 andColor:(id)a1;
+ (void)averageColorFromView:(id)a0 sampleCount:(unsigned long long)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;
+ (void)p_averageColorFromView:(id)a0 sampleCount:(unsigned long long)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 completion:(id /* block */)a3;
+ (id)getSnapShotFromView:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (double)luminanceForColor:(id)a0;

@end
