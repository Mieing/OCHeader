@protocol MTLComputePipelineState;

@interface MPSCNNOnnxop2BufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_onnxop2;
}

- (void)encode:(id)a0 state:(id)a1 input0:(id)a2 input1:(id)a3 outputs:(id)a4 params:(id)a5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0 broadcast_type:(int)a1 gather_axis:(int)a2;
- (id)initWithDevice:(id)a0 library:(id)a1 broadcastType:(int)a2 gatherAxis:(int)a3;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
