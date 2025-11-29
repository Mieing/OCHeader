@protocol MTLComputePipelineState;

@interface MPSCNNBatchNorm : MPSCNNKernel {
    id<MTLComputePipelineState> m_batchnorm;
    id<MTLComputePipelineState> m_batchnormArray;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2 gamma:(id)a3 beta:(id)a4 reluType:(id)a5 reluMax:(id)a6 reluSlope:(id)a7 reluFlag:(id)a8;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
