@protocol MTLComputePipelineState;

@interface MPSCNNSescaleBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_sescale;
}

- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 outputs:(id)a3 params:(id)a4;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
