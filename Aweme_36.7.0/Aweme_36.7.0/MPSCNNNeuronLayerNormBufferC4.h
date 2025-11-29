@protocol MTLComputePipelineState;

@interface MPSCNNNeuronLayerNormBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_layer_norm;
}

- (void)encode:(id)a0 sourceBuffer:(id)a1 destinationBuffer:(id)a2 gammaBuffer:(id)a3 betaBuffer:(id)a4 paramBuffer:(id)a5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0 normType:(int)a1;
- (id)initWithDevice:(id)a0 library:(id)a1 normType:(int)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
