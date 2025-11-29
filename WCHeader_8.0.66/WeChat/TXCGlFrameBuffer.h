@protocol TXIGlContext;

@interface TXCGlFrameBuffer : NSObject

@property (nonatomic) struct __CVBuffer { } *renderPixelBuffer;
@property (nonatomic) unsigned int texture;
@property (nonatomic) struct __CVBuffer { } *renderTexture;
@property (nonatomic) char *outputBytes;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (readonly, nonatomic) id<TXIGlContext> glContext;
@property (readonly, nonatomic) unsigned int framebuffer;
@property (readonly, nonatomic) char *byteBuffer;
@property (readonly, nonatomic) unsigned long long padding;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL enableShareTexToPixelBuffer;
@property (nonatomic) unsigned long long mode;

- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)activate;
- (void)activateWithClear:(BOOL)a0;
- (void)bindPixelBufferAsRenderTarget:(struct __CVBuffer { } *)a0;
- (void)bindTexture:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void)bindPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)createFramebuffer;
- (BOOL)createRenderPixelBufferWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)createTextureWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)dumpImage;
- (void).cxx_destruct;

@end
