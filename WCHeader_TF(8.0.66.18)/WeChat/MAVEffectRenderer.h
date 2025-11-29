@class MAVMetalContext, MAVCopyRendererMetal, NSMutableArray, MAVEffectManager;

@interface MAVEffectRenderer : NSObject {
    MAVEffectManager *_effectManager;
    MAVCopyRendererMetal *_screenRender;
    int _width;
    int _height;
    BOOL _sizeChanged;
    NSMutableArray *_inputArray;
    struct __CVBuffer { } *_outputTexture;
    struct __CVBuffer { } *_outputPixelBuffer;
    NSMutableArray *_textureRefCache;
}

@property (retain, nonatomic) MAVMetalContext *context;

- (id)init;
- (id)initWithContext:(id)a0;
- (void)setup;
- (void)dealloc;
- (id)getEffectManager;
- (void)setSize:(int)a0 height:(int)a1;
- (void)addInput:(struct __CVBuffer { } *)a0;
- (void)addInput:(struct __CVBuffer { } *)a0 rotate:(long long)a1;
- (void)addInputWithInfo:(id)a0;
- (void)render;
- (void)renderWithPts:(long long)a0;
- (void)renderToScreen:(id)a0;
- (void)renderToScreen:(id)a0 WithPts:(long long)a1;
- (void)createInput:(id)a0;
- (struct __CVBuffer { } *)getPixelBuffer;
- (id)getTexture;
- (void)checkOutput;
- (void).cxx_destruct;

@end
