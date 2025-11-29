@interface MMVideoUtils : NSObject

+ (struct opaqueCMSampleBuffer { } *)newAudioSample:(void *)a0 size:(unsigned int)a1 timingInfo:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })a2 numberChannels:(int)a3 SampleRate:(int)a4;
+ (struct opaqueCMSampleBuffer { } *)newVideoSample:(struct __CVBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (struct opaqueCMSampleBuffer { } *)newVideoSample:(struct __CVBuffer { } *)a0 timescale:(int)a1 timeStamp:(unsigned long long)a2;
+ (struct __CVBuffer { } *)copyPixelBuffer:(struct __CVBuffer { } *)a0;
+ (struct __CVBuffer { } *)copyPixelBuffer:(struct __CVBuffer { } *)a0 pixelBufferAttributes:(id)a1;
+ (struct opaqueCMSampleBuffer { } *)copySampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (struct opaqueCMSampleBuffer { } *)copySampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (struct opaqueCMSampleBuffer { } *)copySampleBufferShallow:(struct opaqueCMSampleBuffer { } *)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (struct __CVBuffer { } *)createEmptyYUVPixelBuffer:(struct CGSize { double x0; double x1; })a0;
+ (struct __CVBuffer { } *)imageToYUVPixelBuffer:(id)a0;
+ (struct __CVBuffer { } *)imageToRGBPixelBuffer:(id)a0;
+ (id)scaleImage:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;
+ (id)scaleImageAspectFill:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;
+ (id)createImageWithColor:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
+ (id)gsImage:(id)a0 withGsNumber:(double)a1;
+ (id)imageFromImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)composeImage:(id)a0 image2:(id)a1;
+ (id)getFileSHA1Signature:(id)a0;
+ (id)renameFile:(id)a0 newFileName:(id)a1;
+ (void)removeCacheFile:(id)a0;
+ (void)removeCacheFiles:(id)a0;
+ (void)checkVideoPath:(id)a0;
+ (void)clearFileType:(id)a0 AtFolderPath:(id)a1;
+ (id)getCacheFolderPath;
+ (id)getRandomFileName:(id)a0 fileType:(id)a1;
+ (id)imageFromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (int)savePixelBuffer:(struct __CVBuffer { } *)a0 ToJPEGPath:(id)a1;
+ (struct __CVBuffer { } *)createGLCompatiblePixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
+ (struct opaqueCMSampleBuffer { } *)createSampleBufferFromPixelBuffer:(struct __CVBuffer { } *)a0;
+ (void)save:(id)a0 ToPath:(id)a1;
+ (id)loadThumbNail:(id)a0;
+ (struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })getAudioBuffer:(struct opaqueCMSampleBuffer { } *)a0;
+ (id)quickJoinVideoS:(id)a0 outputPath:(id)a1 result:(id /* block */)a2;
+ (struct CGSize { double x0; double x1; })getSize:(struct opaqueCMSampleBuffer { } *)a0;
+ (double)getPts:(struct opaqueCMSampleBuffer { } *)a0;
+ (double)getValue:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (id)dictionaryWithJsonString:(id)a0;
+ (BOOL)supportVBR;
+ (BOOL)supportBFrame;
+ (int)alignTo16:(int)a0;

@end
