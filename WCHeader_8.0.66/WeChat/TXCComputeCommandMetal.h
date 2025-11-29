@class NSString;
@protocol MTLLibrary, MTLDevice, MTLComputePipelineState;

@interface TXCComputeCommandMetal : NSObject

@property (nonatomic) BOOL initialized;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLComputePipelineState> pipelineState;
@property (copy, nonatomic) NSString *shaderSource;
@property (copy, nonatomic) NSString *kernelFunction;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } threadsPerThreadgroup;

- (id)initWithDevice:(id)a0 shaderSource:(id)a1 kernelFunction:(id)a2;
- (BOOL)setupPipeline;
- (void)dispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 encoder:(id)a1;
- (BOOL)compute:(id)a0 computeSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 execute:(id /* block */)a2;
- (void).cxx_destruct;

@end
