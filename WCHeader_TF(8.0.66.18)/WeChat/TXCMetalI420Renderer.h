@class TXCMetalRenderKernel, NSArray;
@protocol MTLBuffer;

@interface TXCMetalI420Renderer : TXCMetalBaseRenderer {
    TXCMetalRenderKernel *_renderKernel;
    const struct SimdColorConversion { struct { void /* unknown type, empty encoding */ x0[3]; } x0; } *_colorConversionPtr;
    id<MTLBuffer> _colorConversionBuffer;
    NSArray *_textures;
}

- (id)renderKernel;
- (void)uploadNativePixelFrame:(const struct NativePixelFrame { void /* function */ **x0; } *)a0;
- (id)drawToTarget:(id)a0 coordinate:(id)a1;
- (unsigned long long)rendererType;
- (void).cxx_destruct;

@end
