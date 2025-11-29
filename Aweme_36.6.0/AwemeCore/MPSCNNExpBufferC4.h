@protocol MTLComputePipelineState;

@interface MPSCNNExpBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_exp_buffer;
}

- (void)encode:(id)a0 input0:(id)a1 output:(id)a2 params:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
