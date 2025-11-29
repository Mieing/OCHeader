@protocol MTLComputePipelineState;

@interface MPSCNNBinaryCrossEntropyBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_convert;
    id<MTLComputePipelineState> m_ce;
}

- (void)encode:(id)a0 label:(id)a1 labelC4:(id)a2 predictions:(id)a3 output:(id)a4 param_convert:(id)a5 param_loss:(id)a6;
- (void)encodeToCommandBuffer:(id)a0 label:(id)a1 labelC4:(id)a2 predictions:(id)a3 output:(id)a4 param_convert:(id)a5 param_loss:(id)a6;
- (id)initWithDevice:(id)a0 library:(id)a1 doSigmoid:(BOOL)a2;
- (void).cxx_destruct;

@end
