@protocol MTLTexture;

@interface VoIPCanvasBuffer : NSObject {
    struct __CVBuffer { } *_pixelBuffer;
    struct __CVBuffer { } *_metalTexture;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (retain, nonatomic) id<MTLTexture> texture;

+ (struct __CVBuffer { } *)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
+ (struct __CVBuffer { } *)createMetalTextureFromPixelBuffer:(struct __CVBuffer { } *)a0 withMetalTextureCache:(struct __CVMetalTextureCache { } *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 pixelFormat:(unsigned long long)a4;
+ (id)bufferByMetalTextureCache:(struct __CVMetalTextureCache { } *)a0 withWidth:(unsigned long long)a1 height:(unsigned long long)a2 pixelFormat:(unsigned long long)a3;

- (struct __CVBuffer { } *)pixelBuffer;
- (struct __CVBuffer { } *)metalTexture;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0 metalTexture:(struct __CVBuffer { } *)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (void)dealloc;
- (void).cxx_destruct;

@end
