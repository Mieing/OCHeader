@class NSArray, IESWaterMarkData, HTSGLFramebuffer, NSMutableArray;

@interface IESDynamicWatermarkFilter : HTSGLFilter {
    double _xPos;
    double _yPos;
    HTSGLFramebuffer *_secondInputFramebuffer;
}

@property (retain, nonatomic) NSArray *waterMarkDataArray;
@property (retain, nonatomic) IESWaterMarkData *waterMarkData;
@property (retain, nonatomic) NSMutableArray *waterMarkFramebufferArray;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) long long refreshInterval;
@property (nonatomic) BOOL isWaterMarkReady;
@property (nonatomic) long long waterMarkIndex;
@property (nonatomic) long long waterMarkFrameCount;
@property (nonatomic) long long waterMarkFrameIndex;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL panoramaMode;
@property (nonatomic) struct CGPoint { double x; double y; } waterMarkPoint;
@property (nonatomic) struct CGSize { double width; double height; } waterMarkSize;

- (void)renderToTextureWithVertices:(const float *)a0 textureCoordinates:(const float *)a1;
- (void)setInputFramebuffer:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeOfFBO;
- (void)initializeRenderer:(id)a0;
- (void)newFrameReadyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 atIndex:(long long)a1 exceptionBlock:(id /* block */)a2;
- (void)initWaterMarkFramebuffers;
- (BOOL)renderUIImage:(id)a0 toFramebuffer:(id)a1;
- (void)updateWatermarkFramebuffer;
- (id)initWithwaterMarkDataArray:(id)a0 useCache:(BOOL)a1 context:(id)a2;
- (long long)currentWaterMarkIndex:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)clearCache;
- (void)dealloc;
- (void)initializeAttributes;

@end
