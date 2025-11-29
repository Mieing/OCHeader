@interface ACCNLELayerUtils : NSObject

+ (double)rotateFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (double)scaleFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)geometryModelWithLayer:(id)a0 fromNLEImageWrapper:(id)a1 mediaSize:(struct CGSize { double x0; double x1; })a2;
+ (BOOL)isStickerLayer:(id)a0;
+ (BOOL)isTextLayer:(id)a0;

@end
