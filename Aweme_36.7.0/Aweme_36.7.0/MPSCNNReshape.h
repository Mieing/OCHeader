@protocol MTLComputePipelineState;

@interface MPSCNNReshape : MPSCNNKernel {
    id<MTLComputePipelineState> m_reshape;
    id<MTLComputePipelineState> m_reshape_array;
    id<MTLComputePipelineState> m_reshape_out_array;
    id<MTLComputePipelineState> m_reshape_in_array;
}

- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2 channels:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
