@protocol MTLComputePipelineState;

@interface MPSCNNImageDotMul : MPSCNNKernel {
    id<MTLComputePipelineState> m_imageDotMul;
    id<MTLComputePipelineState> m_imageDotMulArray;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
