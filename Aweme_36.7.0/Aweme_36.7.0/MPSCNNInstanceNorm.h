@protocol MTLComputePipelineState;

@interface MPSCNNInstanceNorm : MPSCNNKernel {
    id<MTLComputePipelineState> m_func;
    id<MTLComputePipelineState> m_funcArray;
}

- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 meanImage:(id)a2 varImage:(id)a3 destinationImage:(id)a4 affine:(id)a5 eps:(id)a6 gamma:(id)a7 beta:(id)a8;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
