@interface ACCVideoImportUtils : NSObject

+ (struct CGSize { double x0; double x1; })validTargetSize:(struct CGSize { double x0; double x1; })a0;
+ (id)requestCoverImageWithAssetModel:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })checkTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forAsset:(id)a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })validCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 maxDuration:(double)a1;
+ (void)trackError:(id)a0 key:(id)a1 extraInfo:(id)a2;
+ (struct CGSize { double x0; double x1; })targetSizeWithAsset:(id)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)exportPresetCompatibleWithAsset:(id)a0;
+ (struct CGSize { double x0; double x1; })targetSizeWithAssetInternal:(id)a0;
+ (struct CGSize { double x0; double x1; })checkReturnSize:(struct CGSize { double x0; double x1; })a0;
+ (id)orientationFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
