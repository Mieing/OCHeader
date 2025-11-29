@interface MessageImageUtil : NSObject

+ (int)thumbnailMaxEdge;
+ (double)thumbnailCompressQuality;
+ (id)genThumbnailImage:(id)a0;
+ (id)genThumbnailImage:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)isProgressiveImage:(id)a0;
+ (BOOL)isProgressiveImageData:(id)a0;
+ (BOOL)isMiddleImgDownload:(id)a0;
+ (BOOL)isHDImageDownloaded:(id)a0;

@end
