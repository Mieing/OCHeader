@protocol MTLComputePipelineState;

@interface MPSCNNTransposeBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_transpose_buffer_c4;
}

- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (id)getPipelineState;

@end
