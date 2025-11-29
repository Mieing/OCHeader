@protocol MTLComputePipelineState;

@interface MPSCNNNeuronLayerNorm : MPSCNNKernel {
    int m_width;
    int m_num;
    id<MTLComputePipelineState> m_layer_norm_array;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 gammaBuffer:(id)a3 betaBuffer:(id)a4 epsParam:(id)a5;
- (id)initWithDevice:(id)a0 library:(id)a1 normType:(int)a2 width:(int)a3 num:(int)a4;
- (void).cxx_destruct;

@end
