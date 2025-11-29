@protocol MTLComputePipelineState;

@interface MPSCNNNeuronOnnxOP2 : MPSCNNKernel {
    id<MTLComputePipelineState> m_op2;
    id<MTLComputePipelineState> m_op2_array;
    id<MTLComputePipelineState> m_op2_array2;
    id<MTLComputePipelineState> m_op2_array3;
    BOOL m_broadcast;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage0:(id)a1 sourceImage1:(id)a2 destinationImage:(id)a3 params:(id)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 broadcast:(BOOL)a2 isCommon:(BOOL)a3;
- (void).cxx_destruct;

@end
