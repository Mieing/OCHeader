@interface WCStoryVideoMakerUtil : NSObject

+ (void)playVideoToControllerWithCompletionBlock:(id /* block */)a0;
+ (id)getTempVideoPathString;
+ (BOOL)deleteTempVideoWithPathString:(id)a0;
+ (void)createOriginalVideoWith:(id)a0 duration:(double)a1 framerate:(double)a2 targetSize:(struct CGSize { double x0; double x1; })a3 complection:(id /* block */)a4;
+ (void)createOriginalVideoWith:(id)a0 complection:(id /* block */)a1;
+ (void)createVideoCompostionWithHandler:(id /* block */)a0;
+ (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)appendToAdapter:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 withInput:(id)a3 withMovieWriter:(id)a4;
+ (id)imageCompressFitSizeScale:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

@end
