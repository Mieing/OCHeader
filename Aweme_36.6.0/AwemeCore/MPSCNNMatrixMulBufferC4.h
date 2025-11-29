@protocol MTLComputePipelineState;

@interface MPSCNNMatrixMulBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_matrix_mul_buffer_c4;
    id<MTLComputePipelineState> m_transpose_buffer_c4;
}

- (void)encode:(id)a0 input0:(id)a1 input1:(id)a2 output:(id)a3 param:(id)a4;
- (void)encode:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 input0:(id)a1 input1:(id)a2 output:(id)a3 param:(id)a4;
- (void)encodeToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
