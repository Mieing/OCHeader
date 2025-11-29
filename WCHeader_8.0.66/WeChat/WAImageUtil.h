@interface WAImageUtil : NSObject

+ (id)generateVideoThumbImage:(id)a0 pos:(double)a1;
+ (BOOL)detectImageBlack:(id)a0;
+ (id)generateVideoThumbImageWithAsset:(id)a0 atTime:(double)a1 isTimeTolerance:(BOOL)a2;
+ (id)getRawGrayData:(id)a0 size:(struct CGSize { double x0; double x1; } *)a1;

@end
