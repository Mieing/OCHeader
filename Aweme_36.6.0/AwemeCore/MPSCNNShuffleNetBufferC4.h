@protocol MTLComputePipelineState;

@interface MPSCNNShuffleNetBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_shufflenet;
}

- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 output0:(id)a3 output1:(id)a4 params:(id)a5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
