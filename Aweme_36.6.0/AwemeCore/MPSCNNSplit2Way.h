@protocol MTLComputePipelineState;

@interface MPSCNNSplit2Way : MPSCNNKernel {
    id<MTLComputePipelineState> m_state;
    id<MTLComputePipelineState> m_stateArray;
    id<MTLComputePipelineState> m_stateArray2;
    id<MTLComputePipelineState> m_stateArray3;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 destinationImage2:(id)a3 inputc:(id)a4 outputc1:(id)a5 outputc2:(id)a6;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
