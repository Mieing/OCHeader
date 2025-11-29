@protocol MTLComputePipelineState;

@interface MPSCNNNeuronSigmoidBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_sigmoid;
}

- (void)encode:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 inputShape:(id)a3;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(int)a0;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
