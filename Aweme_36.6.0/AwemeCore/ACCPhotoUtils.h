@interface ACCPhotoUtils : NSObject

+ (void)getPhotoCanvasOutputSizeWithModel:(id)a0 outputSize:(id /* block */)a1;
+ (struct CGSize { double x0; double x1; })photoCanvasSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })photoCanvasSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0 baseWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })assetResolutionConversionWithString:(id)a0;
+ (BOOL)hasCanvasEdit:(id)a0;
+ (BOOL)hasTemplatePinch:(id)a0;
+ (BOOL)hasCanvasEditIgnoreCrop:(id)a0;
+ (BOOL)canExportAsPhoto:(id)a0;
+ (BOOL)canExportAsPhotoIgnoreCrop:(id)a0;
+ (id)videoClippedImageIgnoreCropEdit:(id)a0 project:(id)a1;
+ (struct CGSize { double x0; double x1; })resourceToVideoCanvasSizeWithProject:(id)a0;
+ (long long)zoomCount:(id)a0;
+ (id)cropImage:(id)a0 toAspectRatio:(struct CGSize { double x0; double x1; })a1;
+ (id)fetchCanvasClippedImage:(id)a0 project:(id)a1;
+ (id)fetchCanvasClippedImageIgnoreCropEdit:(id)a0 project:(id)a1 ignoreVideo:(BOOL)a2;

@end
