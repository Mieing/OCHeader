@interface AWEIMImagePreviewUtility : NSObject

+ (BOOL)isLongImageSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isPictureFormatOptimizeEnable;
+ (struct CGSize { double x0; double x1; })getLimitSizeWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)downsampleWithAsset:(id)a0 limitSize:(struct CGSize { double x0; double x1; })a1 data:(id)a2;
+ (id)croppedImageWithImage:(id)a0;
+ (BOOL)isGif:(id)a0;
+ (id)downsampleWithData:(id)a0 limitSize:(struct CGSize { double x0; double x1; })a1 forceJpeg:(BOOL)a2 useOrigin:(BOOL)a3;
+ (BOOL)isLongOrWideImageSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isLongPictureOptimizeDisplayEnable;
+ (id)getImageCoverDataWithImageData:(id)a0;
+ (id)downsampleWithAsset:(id)a0 limitSize:(struct CGSize { double x0; double x1; })a1 data:(id)a2 forceJpeg:(BOOL)a3 useOrigin:(BOOL)a4;
+ (struct CGSize { double x0; double x1; })getOriginLimitSizeWithImageSize:(struct CGSize { double x0; double x1; })a0;
+ (id)webpImageDataWithMaxDataSize:(float)a0 image:(id)a1;
+ (id)hmacSHA256WithKey:(id)a0 data:(id)a1;
+ (struct CGSize { double x0; double x1; })getLongPictureLimitSizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isWideImageSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })getWidePictureLimitSizeWithSize:(struct CGSize { double x0; double x1; })a0;
+ (id)processExchangePickedImage:(id)a0;
+ (struct CGSize { double x0; double x1; })getLongPictureLimitSize;
+ (id)processPickedImage:(id)a0 userOrigin:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })getImageLimitResolution;
+ (BOOL)isLongPictureOptimizeResEnable;
+ (id)downsampleWithAsset:(id)a0 limitSize:(struct CGSize { double x0; double x1; })a1 data:(id)a2 forceJpeg:(BOOL)a3;
+ (id)downsampleWithData:(id)a0 limitSize:(struct CGSize { double x0; double x1; })a1 useOrigin:(BOOL)a2 forceJpeg:(BOOL)a3 type:(unsigned long long)a4;
+ (struct CGSize { double x0; double x1; })getLimitSizeWithResSize:(struct CGSize { double x0; double x1; })a0;
+ (id)cropImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)cropImageWithImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 longImageClipAtMiddle:(BOOL)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getTopCropRectWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })getWidePictureLimitSize;
+ (id)getLongPictureV2Config;
+ (id)downsampleWithData:(id)a0 limitSize:(struct CGSize { double x0; double x1; })a1 useOrigin:(BOOL)a2 forceJpeg:(BOOL)a3;
+ (BOOL)isPictureHEIFOptimizeEnable;

@end
