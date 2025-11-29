@interface IESLiveKTVLyricUtil : NSObject

+ (id)findCurrentWordWithTime:(double)a0 lyrics:(id)a1 preResult:(id)a2;
+ (double)leftOffset:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alignment:(long long)a2 attributes:(id)a3;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })imageRectConvertToTransform:(struct CGSize { double x0; double x1; })a0 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
