@protocol MTLComputePipelineState;

@interface MPSCNNReduceBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_reduce_buffer_c4;
    id<MTLComputePipelineState> m_reduce_channel_buffer_c4;
}

- (void)encode:(id)a0 state:(id)a1 input:(id)a2 output:(id)a3 param:(id)a4;
- (id)getPipelineState:(int)a0;
- (id)initWithDevice:(id)a0 library:(id)a1 reduce_type:(int)a2;
- (void).cxx_destruct;

@end
