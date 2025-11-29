@protocol MTLComputePipelineState;

@interface MPSCNNNeuronReluHardSwishGPU : MPSCNNKernel {
    id<MTLComputePipelineState> m_hard;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 maxVal:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
