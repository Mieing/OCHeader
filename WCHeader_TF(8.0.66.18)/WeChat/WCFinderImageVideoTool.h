@interface WCFinderImageVideoTool : NSObject

+ (id)imageResize:(id)a0 andResizeConstraint:(struct CGSize { double x0; double x1; })a1;
+ (id)getVideoImageWithTime:(double)a0 videoPath:(id)a1 keyFrameRate:(double)a2;
+ (id)getCompressImageDataBy:(id)a0 imageType:(unsigned long long)a1 compressRate:(double *)a2;
+ (id)getCompressImageDataBy:(id)a0 defaultRate:(double)a1 maxSize:(double)a2 compressRate:(double *)a3;
+ (void)accessAudioFromVideo:(id)a0 completion:(id /* block */)a1;
+ (id)compressHeadImage:(id)a0;
+ (id)generateCGImageFromImage:(id)a0;
+ (BOOL)selectedImagesSizeLegal:(id)a0;
+ (BOOL)checkSelectedImageIsSizeLegal:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)livePhotoDurationMoreThanLimit:(double)a0;

@end
