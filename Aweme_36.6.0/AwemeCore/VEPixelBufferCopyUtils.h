@interface VEPixelBufferCopyUtils : NSObject

@property (nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (nonatomic) int pixelBufferPoolWidth;
@property (nonatomic) int pixelBufferPoolHeight;
@property (nonatomic) unsigned int pixelFormat;

+ (id)sharedInstance;

- (struct __CVBuffer { } *)copyPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)cropPixelBuffer:(struct __CVBuffer { } *)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct __CVBuffer { } *)copyAndRetainYUV420vPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)copyPixelBufferCommon:(struct __CVBuffer { } *)a0;
- (struct __CFDictionary { } *)buffer_attributes_create:(int)a0 height:(int)a1 pix_fmt:(unsigned int)a2;
- (void)rotatePlane90Degrees:(void *)a0 sourceWidth:(unsigned long long)a1 sourceHeight:(unsigned long long)a2 sourceBytesPerRow:(unsigned long long)a3 destAddress:(void *)a4 destBytesPerRow:(unsigned long long)a5 bytesPerPixel:(unsigned long long)a6 flip:(BOOL)a7 plane:(int)a8;
- (void)rotatePlane180Degrees:(void *)a0 sourceWidth:(unsigned long long)a1 sourceHeight:(unsigned long long)a2 sourceBytesPerRow:(unsigned long long)a3 destAddress:(void *)a4 destBytesPerRow:(unsigned long long)a5 bytesPerPixel:(unsigned long long)a6 flip:(BOOL)a7;
- (void)rotatePlane270Degrees:(void *)a0 sourceWidth:(unsigned long long)a1 sourceHeight:(unsigned long long)a2 sourceBytesPerRow:(unsigned long long)a3 destAddress:(void *)a4 destBytesPerRow:(unsigned long long)a5 bytesPerPixel:(unsigned long long)a6 flip:(BOOL)a7 plane:(int)a8;
- (struct __CVBuffer { } *)genPixelbufferWithCGImage:(struct CGImage { } *)a0;
- (struct __CVBuffer { } *)genPixelbufferWithCIImage:(id)a0;
- (struct __CVBuffer { } *)cropPixelBufferWithGPU:(struct __CVBuffer { } *)a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct __CVBuffer { } *)rotatePixelBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1;
- (struct __CVBuffer { } *)copyBGRAPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)flushCache;
- (id)init;
- (void)dealloc;

@end
