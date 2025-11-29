@protocol MTLComputePipelineState;

@interface MPSCNNEltwiseBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_eltwise;
}

- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 outputs:(id)a3 params:(id)a4 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a5 dispatchThreads:(BOOL)a6;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
