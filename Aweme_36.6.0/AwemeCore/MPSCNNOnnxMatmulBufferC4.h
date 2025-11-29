@protocol MTLComputePipelineState;

@interface MPSCNNOnnxMatmulBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_onnx_matmul_buffer_c4;
}

- (void)encode:(id)a0 state:(id)a1 input0:(id)a2 input1:(id)a3 output:(id)a4 param:(id)a5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1 matmulType:(int)a2;
- (void).cxx_destruct;
- (id)getPipelineState;

@end
