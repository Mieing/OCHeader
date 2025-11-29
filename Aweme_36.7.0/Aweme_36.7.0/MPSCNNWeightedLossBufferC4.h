@protocol MTLComputePipelineState;

@interface MPSCNNWeightedLossBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_weighted_loss;
}

- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 output:(id)a3 coefs:(id)a4 param_loss:(id)a5;
- (void)encodeToCommandBuffer:(id)a0 input0:(id)a1 input1:(id)a2 output:(id)a3 coefs:(id)a4 param_loss:(id)a5;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
