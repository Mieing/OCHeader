@protocol MTLComputePipelineState;

@interface MPSCNNNeuronReluBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_relu;
}

- (void)encode:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 inputShape:(id)a3 reluType:(id)a4 reluMax:(id)a5 reluSlope:(id)a6 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a7 dispatchThreads:(BOOL)a8;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
