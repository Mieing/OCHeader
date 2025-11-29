@interface ACCImageAlbumGraphicUtil : NSObject

+ (id)compressImageWithImage:(id)a0 scene:(id)a1 quality:(double)a2;
+ (id)recodeImageData:(id)a0;
+ (id)compressImageWithImage:(id)a0 scene:(id)a1;
+ (id)scaleAspectFillmageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)composeImageWithBelowImage:(id)a0 topImage:(id)a1;
+ (id)renderImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 renderActions:(id /* block */)a2;
+ (id)renderImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 opaque:(BOOL)a2 renderActions:(id /* block */)a3;
+ (id)renderImageWithSize:(struct CGSize { double x0; double x1; })a0 renderActions:(id /* block */)a1;
+ (id)cropImageWithImage:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)compressImageWithImage:(id)a0 forceRecode:(BOOL)a1 forceForbidRecode:(BOOL)a2 scene:(id)a3 quality:(double)a4;
+ (id)centerCropImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)imageWithOriginImage:(id)a0 colorSpace:(struct CGColorSpace { } *)a1;
+ (id)compressImageWithImage:(id)a0 forceForbidRecode:(BOOL)a1 scene:(id)a2;

@end
