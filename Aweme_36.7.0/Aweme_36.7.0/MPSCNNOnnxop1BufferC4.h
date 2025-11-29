@protocol MTLComputePipelineState;

@interface MPSCNNOnnxop1BufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_onnxop1_buffer;
}

- (void)encode:(id)a0 input0:(id)a1 output:(id)a2 params:(id)a3;
- (id)initWithDevice:(id)a0 library:(id)a1 optype:(int)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
