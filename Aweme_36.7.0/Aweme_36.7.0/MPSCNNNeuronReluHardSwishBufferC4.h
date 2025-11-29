@protocol MTLComputePipelineState;

@interface MPSCNNNeuronReluHardSwishBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_hard;
}

- (void)encode:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 params:(id)a3;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
