@interface BDUGVideoMark : NSObject

+ (void)readWithAsset:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 complete:(id /* block */)a2;
+ (void)decodeSharedWaterMark:(char *)a0 width:(int)a1 height:(int)a2 maxWatermarkSize:(long long)a3 completion:(id /* block */)a4;
+ (void)readWithAsset:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 maxWatermarkSize:(long long)a2 complete:(id /* block */)a3;
+ (void)trackStartDecodeWithAsset:(id)a0;
+ (void)decodeSharedVideoWaterMarkBuffer:(struct opaqueCMSampleBuffer { } *)a0 maxWatermarkSize:(long long)a1 completion:(id /* block */)a2;
+ (void)trackEndDecodeWithAsset:(id)a0 success:(BOOL)a1 startTime:(double)a2 count:(long long)a3;
+ (void)readWithAsset:(id)a0 complete:(id /* block */)a1;
+ (void)read:(id)a0 complete:(id /* block */)a1;
+ (void)read:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 complete:(id /* block */)a2;
+ (void)read:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 maxWatermarkSize:(long long)a2 complete:(id /* block */)a3;
+ (void)setMonitor:(BOOL)a0;

@end
