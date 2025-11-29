@protocol MTLComputePipelineState;

@interface MPSCNNSoftmaxBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_softmax_slice_1_channel_2;
    id<MTLComputePipelineState> m_softmax_slice_1_channel_3;
    id<MTLComputePipelineState> m_softmax_slice_1_channel_4;
    id<MTLComputePipelineState> m_softmax_common_mode_0;
    id<MTLComputePipelineState> m_softmax_common;
    id<MTLComputePipelineState> m_softmax_axis_23;
    int m_axis;
}

- (void)encode:(id)a0 state:(id)a1 inputs:(id)a2 outputs:(id)a3 params:(id)a4;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (id)getPipelineState:(id)a0 oc:(int)a1;
- (id)initWithDevice:(id)a0 library:(id)a1 axis:(int)a2;
- (void).cxx_destruct;

@end
