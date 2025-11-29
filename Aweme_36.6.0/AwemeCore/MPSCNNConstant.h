@protocol MTLComputePipelineState;

@interface MPSCNNConstant : MPSCNNKernel {
    id<MTLComputePipelineState> m_constant;
    id<MTLComputePipelineState> m_constant_array;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
