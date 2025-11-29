@protocol MTLComputePipelineState;

@interface MPSCNNShuffleBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_shuffle;
}

- (void)encode:(id)a0 input:(id)a1 output:(id)a2 params:(id)a3;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
