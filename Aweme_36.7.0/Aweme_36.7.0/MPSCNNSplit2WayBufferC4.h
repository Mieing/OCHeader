@protocol MTLComputePipelineState;

@interface MPSCNNSplit2WayBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_split2way_buffer;
    id<MTLComputePipelineState> m_split3way_buffer;
    id<MTLComputePipelineState> m_split3way_w_buffer;
    id<MTLComputePipelineState> m_split3way_h_buffer;
}

- (void)encode:(id)a0 input:(id)a1 output0:(id)a2 output1:(id)a3 params:(id)a4;
- (void)encode:(id)a0 state:(id)a1 input:(id)a2 output0:(id)a3 output1:(id)a4 output2:(id)a5 params:(id)a6;
- (id)getPipelineState:(int)a0 axis:(int)a1;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
