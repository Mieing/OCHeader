@class TXCMetalRenderKernel, NSArray;

@interface TXCMetalRGBRenderer : TXCMetalBaseRenderer {
    TXCMetalRenderKernel *_renderKernel;
    NSArray *_textures;
    BOOL _swapColorChannels;
}

- (void)uploadNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (id)drawToTarget:(id)a0 coordinate:(id)a1;
- (id)drawMetalTexture:(id)a0 toTarget:(id)a1 coordinate:(id)a2;
- (unsigned long long)rendererType;
- (void).cxx_destruct;

@end
