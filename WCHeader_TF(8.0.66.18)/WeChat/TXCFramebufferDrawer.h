@class TXCGLDrawer, TXCVideoFrameCoords;
@protocol TXIGlContext;

@interface TXCFramebufferDrawer : NSObject

@property (readonly, nonatomic) id<TXIGlContext> context;
@property (readonly, nonatomic) TXCVideoFrameCoords *coords;
@property (retain, nonatomic) TXCGLDrawer *drawer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;

- (id)initWithContext:(id)a0 coords:(id)a1 pixelFormat:(unsigned long long)a2;
- (unsigned long long)getDrawerTypeWithFormat:(unsigned long long)a0;
- (void)updateDrawerWithFormatIfNeed:(unsigned long long)a0;
- (BOOL)drawPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)drawTexture:(unsigned int)a0 width:(double)a1 height:(double)a2;
- (void)redrawCurrentFrame;
- (void).cxx_destruct;

@end
