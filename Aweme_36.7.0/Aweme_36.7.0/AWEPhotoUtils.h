@interface AWEPhotoUtils : NSObject

+ (struct CGSize { double x0; double x1; })photoExportSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })livePhotoExportSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })photoMaxExportSize;
+ (struct CGSize { double x0; double x1; })exportSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0 isLivePhoto:(BOOL)a1;

@end
