@protocol MTLComputePipelineState;

@interface MPSCNNEltwise : MPSCNNKernel {
    id<MTLComputePipelineState> m_eltwise;
    id<MTLComputePipelineState> m_eltwiseRelu;
    id<MTLComputePipelineState> m_eltwiseArray;
    id<MTLComputePipelineState> m_eltwiseArrayRelu;
    BOOL m_relu;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 sourceImage2:(id)a2 destinationImage:(id)a3;
- (id)initWithDevice:(id)a0 library:(id)a1 relu:(BOOL)a2;
- (void).cxx_destruct;

@end
