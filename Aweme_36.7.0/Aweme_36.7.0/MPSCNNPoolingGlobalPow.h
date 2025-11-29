@protocol MTLComputePipelineState;

@interface MPSCNNPoolingGlobalPow : MPSCNNKernel {
    id<MTLComputePipelineState> m_pooling_global_pow2;
    id<MTLComputePipelineState> m_pooling_global_pow2_array;
}

- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
