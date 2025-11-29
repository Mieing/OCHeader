@interface CameraScanGoodsImageProcessor : NSObject

+ (id)generateCVMat:(struct __CVBuffer { } *)a0 enableMem:(BOOL)a1;
+ (id)generateMinLen:(int)a0 CVMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a1;
+ (id)generateCroppedImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 CVMat:(struct Mat { int x0; int x1; int x2; int x3; char *x4; int *x5; char *x6; char *x7; char *x8; struct MatAllocator *x9; struct MSize { int *x0; } x10; struct MStep { unsigned long long *x0; unsigned long long x1[2]; } x11; })a1;
+ (id)genUploadImageData:(id)a0 outputImageSize:(struct CGSize { double x0; double x1; } *)a1;
+ (id)genUploadWebpData:(id)a0;
+ (id)genUploadWXAMData:(id)a0;

@end
