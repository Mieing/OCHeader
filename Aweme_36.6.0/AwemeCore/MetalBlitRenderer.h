@class MTLRenderPassDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLCommandQueue, MTLDevice, MTLFunction;

@interface MetalBlitRenderer : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) MTLRenderPipelineDescriptor *pipelineStateDescriptor;
@property (retain, nonatomic) MTLRenderPassDescriptor *renderPassDescriptor;
@property (retain, nonatomic) id<MTLFunction> blitLinearFragment;
@property (retain, nonatomic) id<MTLFunction> blitNearestFragment;

- (void)drawToTextureWithEncoder:(id)a0 dstTexture:(id)a1 dstOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 dstSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a3 srcTexture:(id)a4 srcOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5 srcSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a6 flipMode:(int)a7 rotateMode:(int)a8 filterMode:(unsigned long long)a9;
- (id)initWithBuiltinPipeline:(id)a0;
- (void)drawToInteropTexture:(id)a0 dstOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 dstSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 srcTexture:(id)a3 srcOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 srcSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5 flipMode:(int)a6 rotateMode:(int)a7 filterMode:(unsigned long long)a8 waitUntilCompleted:(BOOL)a9;
- (void)dealloc;

@end
