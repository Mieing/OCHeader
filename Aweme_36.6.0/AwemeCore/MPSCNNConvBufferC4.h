@protocol MTLComputePipelineState;

@interface MPSCNNConvBufferC4 : MPSCNNKernel {
    id<MTLComputePipelineState> m_conv_buffer;
    id<MTLComputePipelineState> m_conv_buffer_x2;
    id<MTLComputePipelineState> m_conv_buffer_c4;
    id<MTLComputePipelineState> m_conv_buffer_1x1;
    id<MTLComputePipelineState> m_conv_buffer_1x1_g1z4;
    id<MTLComputePipelineState> m_conv_buffer_img2col;
    id<MTLComputePipelineState> m_conv_buffer_col2img;
    id<MTLComputePipelineState> m_buffer_matmul4x4;
}

- (void)encode:(id)a0 state:(id)a1 input:(id)a2 output:(id)a3 param:(id)a4 weight:(id)a5 bias:(id)a6 threads:(struct pair<MTLSize, MTLSize> { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a7 dispatchThreads:(BOOL)a8 ifPrint:(BOOL)a9;
- (void)encodeImg2Col:(id)a0 input:(id)a1 output:(id)a2 param:(id)a3 bias:(id)a4 trans_input:(id)a5 trans_output:(id)a6 trans_weight:(id)a7;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })getGridSize:(int)a0 param:(id)a1;
- (id)getPipelineState:(int)a0 ow:(int)a1 strideX:(int)a2 strideY:(int)a3;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1;

@end
