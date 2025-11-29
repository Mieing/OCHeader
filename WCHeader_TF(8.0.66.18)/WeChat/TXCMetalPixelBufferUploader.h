@class TXCMetalContext;
@protocol MTLTexture;

@interface TXCMetalPixelBufferUploader : NSObject {
    id<MTLTexture> _cpuTexturesCache[3];
    TXCMetalContext *_metalContext;
}

+ (BOOL)supportGPUUpload:(struct __CVBuffer { } *)a0;
+ (id)uploadPixelBuffer:(struct __CVBuffer { } *)a0 textureCache:(struct __CVMetalTextureCache { } *)a1;
+ (id)metalTextureFromRGBPixelBuffer:(struct __CVBuffer { } *)a0 textureCache:(struct __CVMetalTextureCache { } *)a1;
+ (id)metalTextureFromRGBPixelBuffer:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 textureCache:(struct __CVMetalTextureCache { } *)a2;
+ (id)metalTextureFromI420PixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(unsigned long long)a1 textureCache:(struct __CVMetalTextureCache { } *)a2;
+ (id)metalTextureFromNV12PixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(unsigned long long)a1 textureCache:(struct __CVMetalTextureCache { } *)a2;
+ (id)metalTextureFromP010LEPixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(unsigned long long)a1 textureCache:(struct __CVMetalTextureCache { } *)a2;

- (id)initWithMetalContext:(id)a0;
- (void)updateTexture:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 withBytes:(const void *)a3 bytesPerRow:(unsigned long long)a4 pixelFormat:(unsigned long long)a5;
- (id)cpuUploadNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (id)cpuUploadPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)uploadPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)uploadNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (void).cxx_destruct;

@end
