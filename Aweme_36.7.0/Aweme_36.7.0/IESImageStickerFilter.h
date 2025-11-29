@class VERenderer, NSMutableDictionary, IESSticker, IESStickerAdapter;

@interface IESImageStickerFilter : HTSGLFilter {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentFrame;
    double _currentRotate;
    NSMutableDictionary *_frameCache;
    float _secondTexturePosition[8];
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentFrameTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _realFramePts;
}

@property (readonly, nonatomic) IESStickerAdapter *stickerAdapter;
@property (retain, nonatomic) VERenderer *alphaTextureRenderer;
@property (nonatomic) BOOL redraw;
@property (nonatomic) long long maxCacheCount;
@property (readonly, nonatomic) IESSticker *sticker;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (void)setInputSize:(struct CGSize { double x0; double x1; })a0 atIndex:(long long)a1;
- (void)initializeRenderer:(id)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)adaptWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rotate:(float)a1;
- (id)updateImage:(id)a0;
- (id)initWithSticker:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
