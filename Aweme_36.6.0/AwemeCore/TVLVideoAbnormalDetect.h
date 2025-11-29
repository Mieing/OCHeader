@class TVLPlayerItemAccessLog, NSMutableArray, TVLPlayerItem;
@protocol MTLBuffer, MTLDevice, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface TVLVideoAbnormalDetect : NSObject {
    TVLPlayerItem *_playerItem;
    TVLPlayerItemAccessLog *_accessLog;
    unsigned long long _snapshotWidth;
    unsigned long long _snapshotHeight;
    unsigned long long _snapshotColorFmt;
    id<MTLDevice> _device;
    id<MTLRenderPipelineState> _pipelineState;
    id<MTLCommandQueue> _commandQueue;
    id<MTLBuffer> _vertices;
    unsigned long long _numVertices;
    NSMutableArray *_textures;
    struct __CVMetalTextureCache { } *_textureCache;
    id<MTLTexture> _snapshotTexture;
    char *_snapshotYUVBUF;
    int _interval;
    int _histogramStep;
    int _histogramSize;
    double _pureColorYThreshold;
    double _pureColorUVThreshold;
    double _pureColorRatioYThreshold;
    double _pureColorRatioUVThreshold;
    BOOL _pureColorCheckAllPlanar;
    int _minPixelCount;
    int _pureColorLogFlag;
    long long _lastDetectTimeStamp;
    NSMutableArray *_histogramY;
    NSMutableArray *_histogramU;
    NSMutableArray *_histogramV;
}

+ (id)createArrayWithNZeroes:(int)a0;
+ (struct { double x0; double x1; })checkMaxFrequencyRatio:(id)a0 :(int)a1 :(int)a2;

- (void)configVideoPureColorAbnormal:(id)a0;
- (BOOL)onDrawVideoFrame:(struct __CVBuffer { } *)a0 ts:(long long)a1;
- (void)setupVertex;
- (void)updateTextureWithYUVVideoFrame:(struct __CVBuffer { } *)a0;
- (void)createSnapShotTexture;
- (void)snapshotRender;
- (void)doDetect;
- (unsigned long long)pureColorDetect:(int)a0 :(int)a1 :(int)a2;
- (void).cxx_destruct;
- (void)setupTextureCache;
- (id)initWithPlayerItem:(id)a0;
- (void)dealloc;
- (void)setupPipeline;

@end
