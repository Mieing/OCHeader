@interface WCStoryPhotoVideoEffectsMaker : NSObject

+ (void)applyVideoEffectsToComposition:(id)a0 photoArray:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (void)exportComposePhotoMovieWithPhotoArrayPhotoArray:(id)a0 url:(id)a1 complection:(id /* block */)a2;
+ (void)createPhotoMovieWithPhotoArray:(id)a0 complection:(id /* block */)a1;
+ (struct __CVBuffer { } *)pixelBufferFromCGImage:(struct CGImage { } *)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)appendToAdapter:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 withInput:(id)a3 withMovieWriter:(id)a4;
+ (void)createEmptyVideo:(id /* block */)a0;
+ (struct CGSize { double x0; double x1; })getVideoCreateSize;
+ (id)getTempBlackVideoPathString;
+ (id)exportVideoPath;
+ (BOOL)deleteTempVideoWithPathString:(id)a0;
+ (id)addBlurBackgroundWithPhotoArray:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (id)createMultiPhotoAnimationGroupWithIndex:(long long)a0;
+ (id)createSinglePhotoAnimationGroup;
+ (id)createPhotoVideoAnimationLayerWithPhotos:(id)a0 size:(struct CGSize { double x0; double x1; })a1 videoLayer:(id)a2;
+ (void)addSinglePhotoAnimationToLayer:(id)a0 blurImage:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (void)addMultiPhotoAnimationToLayer:(id)a0 blurImageArray:(id)a1 size:(struct CGSize { double x0; double x1; })a2;

@end
