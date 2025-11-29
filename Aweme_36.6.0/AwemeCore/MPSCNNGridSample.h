@protocol MTLComputePipelineState;

@interface MPSCNNGridSample : MPSCNNKernel {
    id<MTLComputePipelineState> m_grid_sample;
    id<MTLComputePipelineState> m_grid_sample_array;
}

- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 grid:(id)a2 batch:(id)a3 output:(id)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 mode:(int)a2;
- (void).cxx_destruct;

@end
