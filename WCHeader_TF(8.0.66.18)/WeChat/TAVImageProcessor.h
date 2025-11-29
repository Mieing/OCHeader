@class TAVVideoSharpenMetal;
@protocol MTLCommandQueue, MTLDevice;

@interface TAVImageProcessor : NSObject

@property (retain, nonatomic) TAVVideoSharpenMetal *_MetalSharpenFilter;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;

- (id)init;
- (void)dealloc;
- (BOOL)isPixelBufferYUVFormat:(struct __CVBuffer { } *)a0;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)writeTextureBackToPixelBuffer:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 planeIndex:(long long)a2;
- (id)textureFromPixelBuffer:(struct __CVBuffer { } *)a0 planeIndex:(long long)a1;
- (void).cxx_destruct;

@end
