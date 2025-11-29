@protocol MTLComputePipelineState;

@interface MPSCNNSgdOptimizerKernel : MPSCNNKernel {
    id<MTLComputePipelineState> m_sgd;
}

- (void)encode:(id)a0 weight:(id)a1 dweight:(id)a2 param:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 weight:(id)a1 dweight:(id)a2 param:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
