@class NSArray, IESSCMetalImage, UIImage, MTKTextureLoader;
@protocol MTLBuffer, MTLDevice, MTLCommandBuffer, MTLTexture, MTLCommandQueue, MTLComputePipelineState;

@interface IESLiveBgRenderBackGroundNode : IESLiveBgRenderBaseNode

@property BOOL isRendering;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (copy, nonatomic) NSArray *slots;
@property (nonatomic) double screenRatio;
@property (nonatomic) BOOL isPreLoading;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueueBg;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueueSlots;
@property (retain, nonatomic) id<MTLComputePipelineState> bgcutPip;
@property (retain, nonatomic) id<MTLComputePipelineState> slotGenPip;
@property (retain, nonatomic) id<MTLComputePipelineState> radiusSlotGenPip;
@property (retain, nonatomic) id<MTLBuffer> vertices;
@property (nonatomic) unsigned long long numVertices;
@property (nonatomic) void /* unknown type, empty encoding */ viewportSize;
@property (nonatomic) struct __CVMetalTextureCache { } *textureCache;
@property (nonatomic) struct __CVMetalTextureCache { } *resultCache;
@property (retain, nonatomic) id<MTLTexture> sourceTexture;
@property (retain, nonatomic) id<MTLTexture> slotsTexture;
@property (retain, nonatomic) id<MTLTexture> resultTexture;
@property (retain, nonatomic) MTKTextureLoader *textLoader;
@property (copy, nonatomic) NSArray *helperSlotsArray;
@property (retain, nonatomic) id<MTLBuffer> helperSlotsBuffer;
@property (copy, nonatomic) NSArray *helperBgArray;
@property (retain, nonatomic) id<MTLBuffer> helperBgBuffer;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } groupSize;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } groupCount;
@property (retain, nonatomic) id<MTLCommandBuffer> bgCutBuffer;
@property (retain, nonatomic) id<MTLCommandBuffer> slotGenBuffer;
@property (nonatomic) BOOL hasPrepared;
@property (nonatomic) double radius;
@property (retain) IESSCMetalImage *currentImage;

- (void)setupVertex;
- (void)updateBgImage:(id)a0;
- (BOOL)enableRadiusBgCut;
- (void)setUpMetal;
- (void)setupThreadGroup;
- (void)setupSlotshelper;
- (void)excutSlotsBuffer;
- (void)setupMetalDevice;
- (void)setupBghelper;
- (void)setBgCutCommend;
- (void)setSlotsCommend;
- (void)excutBgBuffer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })multiByScreenRatio:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpMetalAfterSize;
- (void)setUpSlotsAfterSlostChange;
- (void)doBgCut;
- (id)getSonNodes;
- (void)onNodeMount;
- (void)onNodeUnMount;
- (void)updateMaskWithTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 slots:(id)a1;
- (void)updateRadius:(double)a0;
- (id)outPutImage;
- (void).cxx_destruct;
- (id)init;
- (void)setupPipeline;
- (id)nodeName;
- (void)setupTexture;

@end
