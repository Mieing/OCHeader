@class CAMetalLayer, CVPixelBufferWrapper;

@interface AnimaXSurfaceDrawable : NSObject

@property (nonatomic) unsigned long long target;
@property (nonatomic) long long backend;
@property (weak, nonatomic) CAMetalLayer *layer;
@property (retain, nonatomic) CVPixelBufferWrapper *bufferWrapper;
@property (nonatomic) struct CGSize { double width; double height; } size;

+ (struct __CVBuffer { } *)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 backend:(long long)a2;

- (id)initWithView:(id)a0 size:(struct CGSize { double x0; double x1; })a1 backend:(long long)a2;
- (struct __CVBuffer { } *)createPixelBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (BOOL)isSizeChangeWithinRange:(double)a0 height:(double)a1;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 size:(struct CGSize { double x0; double x1; })a1 backend:(long long)a2;
- (id)initWithMetalLayer:(id)a0 scale:(double)a1;
- (void).cxx_destruct;
- (void)setBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)updateSize:(struct CGSize { double x0; double x1; })a0;

@end
