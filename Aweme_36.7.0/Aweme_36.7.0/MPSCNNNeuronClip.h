@protocol MTLComputePipelineState;

@interface MPSCNNNeuronClip : MPSCNNKernel {
    id<MTLComputePipelineState> m_clip;
    id<MTLComputePipelineState> m_clip_array;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 clipParam:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
