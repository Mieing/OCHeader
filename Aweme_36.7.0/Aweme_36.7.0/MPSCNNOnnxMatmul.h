@protocol MTLComputePipelineState;

@interface MPSCNNOnnxMatmul : MPSCNNKernel {
    id<MTLComputePipelineState> m_matmul;
    int m_oh;
    int m_ogz;
    struct pair<MTLSize, MTLSize> { struct { unsigned long long width; unsigned long long height; unsigned long long depth; } first; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } second; } m_threads;
}

- (void)encodeToCommandBuffer:(id)a0 input0:(id)a1 input1:(id)a2 output:(id)a3;
- (id)initWithDevice:(id)a0 library:(id)a1 oh:(int)a2 ogz:(int)a3;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
