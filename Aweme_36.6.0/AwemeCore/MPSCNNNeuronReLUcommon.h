@protocol MTLComputePipelineState;

@interface MPSCNNNeuronReLUcommon : MPSCNNKernel {
    id<MTLComputePipelineState> m_commonrelu;
    id<MTLComputePipelineState> m_commonrelu_array;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 reluType:(id)a3 reluMax:(id)a4 reluSlope:(id)a5;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
