@class TXCMetalRenderKernel, NSArray;

@interface TXCMetalRGBA64LERenderer : TXCMetalBaseRenderer {
    TXCMetalRenderKernel *_renderKernel;
    NSArray *_textures;
    unsigned long long _pixelFormat;
}

- (id)initWithContext:(id)a0;
- (id)renderKernel;
- (void)uploadNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (void)setDisplayConfig:(id)a0;
- (id)drawToTarget:(id)a0 coordinate:(id)a1;
- (id)drawMetalTexture:(id)a0 toTarget:(id)a1 coordinate:(id)a2;
- (unsigned long long)rendererType;
- (void).cxx_destruct;

@end
