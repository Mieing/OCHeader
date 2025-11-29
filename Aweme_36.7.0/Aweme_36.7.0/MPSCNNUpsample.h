@protocol MTLComputePipelineState;

@interface MPSCNNUpsample : MPSCNNKernel {
    id<MTLComputePipelineState> m_upsample_nearest;
    id<MTLComputePipelineState> m_upsample_nearest_array;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 params:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
