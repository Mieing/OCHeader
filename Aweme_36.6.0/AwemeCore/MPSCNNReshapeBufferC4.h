@protocol MTLComputePipelineState;

@interface MPSCNNReshapeBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_reshape_buffer;
}

- (id)initWithDevice:(id)a0 library:(id)a1 is_nchw:(BOOL)a2;
- (void)encode:(id)a0 input:(id)a1 output:(id)a2 params:(id)a3;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
