@interface AWEIMVideoExportUtility : NSObject

+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })checkTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forAsset:(id)a1;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })validCMTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 maxDuration:(double)a1;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (void)exportAsset:(id)a0 toPath:(id)a1 suggestedSize:(struct CGSize { double x0; double x1; })a2 frameRate:(long long)a3 completion:(id /* block */)a4;
+ (id)exportSessionWithAVAsset:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1 frameRate:(long long)a2;
+ (id)buildExportSessionWithAsset:(id)a0 clipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 suggestedSize:(struct CGSize { double x0; double x1; })a2 frameRate:(long long)a3;
+ (id)orientationFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
