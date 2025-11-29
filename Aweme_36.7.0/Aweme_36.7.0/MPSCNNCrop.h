@protocol MTLComputePipelineState;

@interface MPSCNNCrop : MPSCNNKernel {
    id<MTLComputePipelineState> m_crop;
    id<MTLComputePipelineState> m_crop_in_array;
    id<MTLComputePipelineState> m_crop_array;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 params:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
