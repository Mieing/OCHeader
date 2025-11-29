@interface IESGCPMediaEditUtil : NSObject

+ (id)createVideoAssetWithFilePath:(id)a0;
+ (void)insertImage:(id)a0 toVideo:(id)a1 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 outputPath:(id)a4 timeLimit:(double)a5 completion:(id /* block */)a6;
+ (void)extractFrameFromVideoWithAsset:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completion:(id /* block */)a2;
+ (void)addImageOverlay:(id)a0 toVideo:(id)a1 insertTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 overlayDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 outputPath:(id)a4 timeLimit:(double)a5 completion:(id /* block */)a6;
+ (void)removeItemAtPathIfNeeded:(id)a0;
+ (id)silentAudioAssetWithDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 formatDesc:(id)a1 outputPath:(id)a2;
+ (void)writeImageVideo:(id)a0 withVideoSize:(struct CGSize { double x0; double x1; })a1 fps:(long long)a2 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 filePath:(id)a4 timeLimit:(double)a5 completion:(id /* block */)a6;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })firstKeyFrameTimeOfAsset:(id)a0;
+ (id)animationWithFromValue:(id)a0 toValue:(id)a1 beginTime:(double)a2;
+ (struct __CVBuffer { } *)pixelBufferFromImage:(id)a0 frameSize:(struct CGSize { double x0; double x1; })a1;

@end
