@class UIView;
@protocol MTLTexture, AnimaXPixelBufferUpdateListener;

@interface CVPixelBufferWrapper : NSObject

@property unsigned long long generation;
@property (retain) id<MTLTexture> metalTexture;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (weak, nonatomic) UIView<AnimaXPixelBufferUpdateListener> *targetView;
@property (nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;
@property (nonatomic) long long backend;
@property struct __CVBuffer { } *renderPixelBuffer;
@property struct __CVBuffer { } *displayPixelBuffer;

+ (struct __CVBuffer { } *)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 backend:(long long)a2;

- (void)resizePixelBufferWrapperWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)notifyBufferUpdateWithGeneration:(unsigned long long)a0;
- (void)destroyAll;
- (void)destroyTexture;
- (void)destroyTextureCache;
- (void)destroyPixelBuffers;
- (void)notifyBufferUpdateWithGeneration:(unsigned long long)a0 srcPixels:(char *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 stride:(unsigned long long)a4;
- (struct __CVBuffer { } *)acquirePixelBufferFromPool;
- (void)copyFromPixels:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 stride:(unsigned long long)a3 toBuffer:(struct __CVBuffer { } *)a4;
- (void)rebuildPixelBufferPoolWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (BOOL)setPixelBuffer:(struct __CVBuffer **)a0 newPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)rebuildMetalTextureIfNeeded;
- (void)createTextureCacheIfNeeded;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
