@class AVAssetImageGenerator;

@interface VEVideoFramesGenerator : NSObject

@property (retain, nonatomic) AVAssetImageGenerator *generator;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ frameCallback;
@property (nonatomic) long long index;
@property (nonatomic) long long total;
@property (nonatomic) BOOL cancelGenerateFrames;

- (long long)orientationForVideoImage:(id)a0;
- (double)caculateInterval:(unsigned long long)a0;
- (void)generateFile:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 customInterval:(double)a2 size:(struct CGSize { double x0; double x1; })a3 imageCallback:(id /* block */)a4 completion:(id /* block */)a5;
- (id)caculateFramesTimesInRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 andInterval:(double)a1;
- (void)generateFile:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 fps:(unsigned long long)a2 size:(struct CGSize { double x0; double x1; })a3 imageCallback:(id /* block */)a4 completion:(id /* block */)a5;
- (void)generateImageWithFile:(id)a0 range:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 customInterval:(double)a2 size:(struct CGSize { double x0; double x1; })a3 imageCallback:(id /* block */)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
