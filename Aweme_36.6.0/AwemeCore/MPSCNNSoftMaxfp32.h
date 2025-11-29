@protocol MTLComputePipelineState;

@interface MPSCNNSoftMaxfp32 : MPSCNNKernel {
    id<MTLComputePipelineState> m_softmaxfp32;
    id<MTLComputePipelineState> m_softmaxfp32_array;
    int m_axis;
    struct pair<MTLSize, MTLSize> { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } first; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } second; } m_threads;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 bufferSrcChannel:(id)a3;
- (id)initWithDevice:(id)a0 library:(id)a1 axis:(int)a2 ow:(int)a3 ogz:(int)a4;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
