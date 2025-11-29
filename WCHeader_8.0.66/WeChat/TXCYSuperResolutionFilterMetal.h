@protocol MTLDevice, MTLLibrary, MTLComputePipelineState, MTLBuffer;

@interface TXCYSuperResolutionFilterMetal : NSObject

@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLComputePipelineState> pipelineState;
@property (retain, nonatomic) id<MTLBuffer> lutBuffer;

- (id)initWithDevice:(id)a0 lutBuffer:(const void *)a1;
- (void)dealloc;
- (BOOL)setupMetal:(const void *)a0;
- (BOOL)setupLut:(const void *)a0;
- (BOOL)setupPipeline;
- (BOOL)process:(id)a0 yTexture:(id)a1 outputTexture:(id)a2;
- (void).cxx_destruct;

@end
