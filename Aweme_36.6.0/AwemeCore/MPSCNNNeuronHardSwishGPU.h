@protocol MTLComputePipelineState;

@interface MPSCNNNeuronHardSwishGPU : MPSCNNKernel {
    id<MTLComputePipelineState> m_hard;
}

- (id)initWithDevice:(id)a0 library:(id)a1 type:(int)a2;
- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;

@end
